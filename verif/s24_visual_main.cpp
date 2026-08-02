#define SDL_MAIN_HANDLED
#include <SDL.h>
#ifdef _WIN32
#include <SDL_syswm.h>
#endif
#include <fcntl.h>
#include <stdlib.h>
#ifdef _WIN32
#include <windows.h>
#endif

#include <algorithm>
#include <array>
#include <chrono>
#include <cstdlib>
#include <cstdint>
#include <cstdio>
#include <filesystem>
#include <fstream>
#include <sstream>
#include <string>
#include <thread>

#include "Vtb_gground_boot.h"
#include "verilated.h"
#include "verilated_save.h"

double sc_time_stamp() { return 0.0; }

namespace {
constexpr int kWidth = 496;
constexpr int kHeight = 384;
namespace fs = std::filesystem;

bool atomic_replace_file(const fs::path& temporary, const fs::path& final_path) {
#ifdef _WIN32
    return MoveFileExW(temporary.c_str(), final_path.c_str(),
                       MOVEFILE_REPLACE_EXISTING | MOVEFILE_WRITE_THROUGH) != 0;
#else
    std::error_code error;
    fs::rename(temporary, final_path, error);
    return !error;
#endif
}

std::string plusarg_value(int argc, char** argv, const char* prefix) {
    const std::string needle(prefix);
    // Launchers append explicit overrides after the global game profile.
    // Let the final value win so bounded checkpoint stages work as intended.
    for (int i = argc - 1; i >= 1; --i) {
        const std::string arg(argv[i]);
        if (arg.rfind(needle, 0) == 0) return arg.substr(needle.size());
    }
    return {};
}

void set_inputs(Vtb_gground_boot& top, SDL_GameController* pad,
                uint32_t automatic_joy = 0, uint8_t automatic_pedal = 0) {
    SDL_PumpEvents();
    const Uint8* key = SDL_GetKeyboardState(nullptr);
    uint32_t joy = 0;
    joy |= uint32_t(key[SDL_SCANCODE_LEFT]) << 1;
    joy |= uint32_t(key[SDL_SCANCODE_RIGHT]) << 0;
    joy |= uint32_t(key[SDL_SCANCODE_UP]) << 3;
    joy |= uint32_t(key[SDL_SCANCODE_DOWN]) << 2;
    joy |= uint32_t(key[SDL_SCANCODE_Z]) << 4;
    joy |= uint32_t(key[SDL_SCANCODE_X]) << 5;
    joy |= uint32_t(key[SDL_SCANCODE_C]) << 6;
    joy |= uint32_t(key[SDL_SCANCODE_RETURN]) << 10;
    joy |= uint32_t(key[SDL_SCANCODE_5]) << 11;
    joy |= uint32_t(key[SDL_SCANCODE_F2]) << 13;
    if (pad) {
        constexpr Sint16 deadzone = 8000;
        const Sint16 x = SDL_GameControllerGetAxis(pad, SDL_CONTROLLER_AXIS_LEFTX);
        const Sint16 y = SDL_GameControllerGetAxis(pad, SDL_CONTROLLER_AXIS_LEFTY);
        joy |= uint32_t(x < -deadzone || SDL_GameControllerGetButton(
            pad, SDL_CONTROLLER_BUTTON_DPAD_LEFT)) << 1;
        joy |= uint32_t(x > deadzone || SDL_GameControllerGetButton(
            pad, SDL_CONTROLLER_BUTTON_DPAD_RIGHT)) << 0;
        joy |= uint32_t(y < -deadzone || SDL_GameControllerGetButton(
            pad, SDL_CONTROLLER_BUTTON_DPAD_UP)) << 3;
        joy |= uint32_t(y > deadzone || SDL_GameControllerGetButton(
            pad, SDL_CONTROLLER_BUTTON_DPAD_DOWN)) << 2;
        joy |= uint32_t(SDL_GameControllerGetButton(pad, SDL_CONTROLLER_BUTTON_A)) << 4;
        joy |= uint32_t(SDL_GameControllerGetButton(pad, SDL_CONTROLLER_BUTTON_B)) << 5;
        joy |= uint32_t(SDL_GameControllerGetButton(pad, SDL_CONTROLLER_BUTTON_X)) << 6;
        joy |= uint32_t(SDL_GameControllerGetButton(pad, SDL_CONTROLLER_BUTTON_START)) << 10;
        joy |= uint32_t(SDL_GameControllerGetButton(pad, SDL_CONTROLLER_BUTTON_BACK)) << 11;
    }
    uint8_t pedal = key[SDL_SCANCODE_UP] ? 0xff : 0x01;
    if (pad) {
        const Sint16 trigger = SDL_GameControllerGetAxis(
            pad, SDL_CONTROLLER_AXIS_TRIGGERRIGHT);
        if (trigger > 0)
            pedal = static_cast<uint8_t>(1 +
                (static_cast<uint32_t>(trigger) * 254U / 32767U));
    }
    if (automatic_pedal) pedal = automatic_pedal;
    top.host_joy0 = joy | automatic_joy;
    top.host_joy1 = top.host_joy2 = top.host_joy3 = 0;
    top.host_paddle0 = pedal;
}

uint32_t checksum(const std::array<uint8_t, kWidth * kHeight * 3>& pixels) {
    uint32_t value = 0x811c9dc5U;
    for (const uint8_t byte : pixels) value = (value ^ byte) * 0x01000193U;
    return value;
}

bool atomic_text(const fs::path& path, const std::string& value) {
    const fs::path temporary = path.string() + ".tmp";
    for (int attempt = 0; attempt < 200; ++attempt) {
        {
            std::ofstream stream(temporary, std::ios::binary | std::ios::trunc);
            if (!stream) return false;
            stream.write(value.data(), static_cast<std::streamsize>(value.size()));
        }
        std::error_code error;
        fs::rename(temporary, path, error);
        if (!error) return true;
        fs::remove(path, error);
        error.clear();
        fs::rename(temporary, path, error);
        if (!error) return true;
        std::this_thread::sleep_for(std::chrono::milliseconds(5));
    }
    return false;
}

int64_t read_token(const fs::path& path) {
    std::ifstream stream(path);
    int64_t value = -1;
    if (stream) stream >> value;
    return stream ? value : -1;
}

bool write_native_ppm(const fs::path& path,
                      const std::array<uint8_t, kWidth * kHeight * 3>& pixels) {
    const fs::path temporary = path.string() + ".tmp";
    {
        std::ofstream stream(temporary, std::ios::binary | std::ios::trunc);
        if (!stream) return false;
        stream << "P6\n" << kWidth << " " << kHeight << "\n255\n";
        stream.write(reinterpret_cast<const char*>(pixels.data()), pixels.size());
        if (!stream) return false;
    }
    std::error_code error;
    fs::rename(temporary, path, error);
    if (!error) return true;
    fs::remove(path, error);
    error.clear();
    fs::rename(temporary, path, error);
    return !error;
}

bool visible_native_window(SDL_Window* window, const char* stage) {
#ifdef _WIN32
    SDL_SysWMinfo info{};
    SDL_VERSION(&info.version);
    if (!SDL_GetWindowWMInfo(window, &info) ||
        info.subsystem != SDL_SYSWM_WINDOWS) return false;
    const HWND hwnd = info.info.win.window;
    RECT rectangle{};
    const bool visible = IsWindow(hwnd) && IsWindowVisible(hwnd) &&
                         GetWindowRect(hwnd, &rectangle);
    std::fprintf(stderr,
        "%s HWND: 0x%llx visible=%u rect=%ld,%ld-%ld,%ld\n", stage,
        static_cast<unsigned long long>(reinterpret_cast<uintptr_t>(hwnd)),
        unsigned(visible), long(rectangle.left), long(rectangle.top),
        long(rectangle.right), long(rectangle.bottom));
    return visible;
#else
    (void)stage;
    return SDL_GetWindowFlags(window) & SDL_WINDOW_SHOWN;
#endif
}

bool append_state(const fs::path& path, uint64_t frame, uint32_t frame_checksum,
                  const Vtb_gground_boot& top) {
    std::ofstream stream(path, std::ios::binary | std::ios::app);
    if (!stream) return false;
    stream << "{\"frame\":" << frame
           << ",\"frame_hash\":" << frame_checksum
           << ",\"rtl_main_pc\":" << top.host_main_pc
           << ",\"rtl_sub_pc\":" << top.host_sub_pc
           << ",\"rtl_main_instructions\":" << top.host_main_instructions
           << ",\"rtl_sub_instructions\":" << top.host_sub_instructions
           << ",\"rtl_sub_released\":" << unsigned(top.host_sub_released)
           << ",\"input_packet\":\"neutral-v1\"}\n";
    stream.flush();
    return bool(stream);
}

int trace_device(uint32_t address) {
    if (address >= 0xf00000U) return 1; // shared Work-A/Work-B mirrors
    if ((address & 0xee0000U) == 0x200000U) return 20; // tile
    if ((address & 0xe80000U) == 0x280000U) return 21; // character
    if ((address & 0xe04000U) == 0x400000U) return 12; // palette
    if ((address & 0xe04000U) == 0x404000U) return 22; // mixer
    if ((address & 0xe40000U) == 0x600000U) return 23; // sprite
    if ((address & 0xe00000U) == 0x800000U && (address & 0x1ffU) < 0x40U) return 4;
    if ((address & 0xfffffcU) == 0x800100U) return 18; // YM2151
    if ((address & 0xf00000U) == 0xa00000U) return 24; // IRQ/timer
    if ((address & 0xf80000U) == 0xb00000U) return 25; // FDC
    if ((address & 0xfc0000U) == 0xbc0000U ||
        (address & 0xfc0000U) == 0xcc0000U) return 26; // bank/FRC/magic
    return 0;
}

bool append_trace(std::ofstream& stream, uint64_t frame,
                  const Vtb_gground_boot& top) {
    const int device = trace_device(top.host_trace_addr);
    if (!device) return true;
    // MAME's address-space taps do not expose accesses performed inside the
    // System 24 RAM/FDC/video handlers consistently.  Emitting millions of
    // one-sided RTL events makes the live comparator repeatedly parse a huge
    // file without adding comparable evidence.  Keep the low-volume control
    // devices that both producers observe; detailed bulk-device behavior is
    // covered by focused RTL tests and is called out in the coverage ledger.
    if (device == 1 || device == 12 || device == 20 || device == 21 ||
        device == 23 || device == 25) return true;
    const unsigned address = device == 1
        ? (top.host_trace_addr & 0xfbffffU) : top.host_trace_addr;
    const unsigned lanes = top.host_trace_be;
    unsigned data = top.host_trace_data;
    if (!(lanes & 1U)) data &= 0xff00U;
    if (!(lanes & 2U)) data &= 0x00ffU;
    stream << "{\"frame\":" << frame
           << ",\"cpu\":" << unsigned(top.host_trace_cpu)
           << ",\"event\":\"bus\",\"rw\":\""
           << (top.host_trace_rnw ? 'r' : 'w') << "\""
           << ",\"address\":" << address
           << ",\"data\":" << data
           << ",\"lanes\":" << lanes
           << ",\"device\":" << device
           << ",\"pc\":" << (top.host_trace_cpu ? top.host_sub_pc
                                                    : top.host_main_pc)
           << "}\n";
    return bool(stream);
}

bool save_checkpoint(VerilatedContext& context, Vtb_gground_boot& top,
                     const std::string& path, uint64_t frames,
                     uint32_t prior_checksum, uint64_t changed_frames,
                     uint64_t published_frames) {
#ifdef S24_NO_SAVABLE
    (void)context;
    (void)top;
    (void)path;
    (void)frames;
    (void)prior_checksum;
    (void)changed_frames;
    (void)published_frames;
    std::fprintf(stderr,
        "Full-state checkpointing is unavailable for this fx68k model.\n");
    return false;
#else
    const fs::path final_path(path);
    const fs::path temporary = final_path.string() + ".tmp";
    VerilatedSave stream;
    stream.open(temporary.string().c_str());
    if (!stream.isOpen()) return false;
    stream << &context << frames << prior_checksum << changed_frames << top;
    stream.close();
    std::error_code error;
    if (!fs::is_regular_file(temporary, error) ||
            fs::file_size(temporary, error) == 0 ||
            !atomic_replace_file(temporary, final_path)) return false;
    // Keep protocol numbering outside the Verilated stream so checkpoints
    // written before lockstep support remain restorable.  A resume bundle
    // owns and hashes this sidecar together with the binary model state.
    if (!atomic_text(final_path.string() + ".token",
                     std::to_string(published_frames) + "\n")) return false;
    std::fprintf(stderr, "Saved full-state checkpoint: %s\n", path.c_str());
    return true;
#endif
}
}

int main(int argc, char** argv) {
#ifdef _WIN32
    SetPriorityClass(GetCurrentProcess(), NORMAL_PRIORITY_CLASS);
#endif
    // Verilator's MinGW save streams call open() without O_BINARY. Select a
    // binary process default before any checkpoint stream is opened.
    if (_set_fmode(_O_BINARY) != 0) {
        std::fprintf(stderr, "Cannot select binary checkpoint mode.\n");
        return 1;
    }
    SDL_SetMainReady();
    SDL_SetHint(SDL_HINT_RENDER_SCALE_QUALITY, "nearest");
    if (SDL_Init(SDL_INIT_VIDEO | SDL_INIT_GAMECONTROLLER) != 0) {
        std::fprintf(stderr, "SDL_Init failed: %s\n", SDL_GetError());
        return 2;
    }
    const std::string game = plusarg_value(argc, argv, "+GAME=");
    const std::string lockstep_arg = plusarg_value(argc, argv, "+LOCKSTEP_DIR=");
    const fs::path lockstep_root = lockstep_arg;
    const bool lockstep = !lockstep_arg.empty();
    std::ofstream trace_stream;
    if (lockstep) {
        std::error_code error;
        fs::create_directories(lockstep_root / "rtl", error);
        if (error) {
            std::fprintf(stderr, "Cannot create lockstep directory: %s\n",
                         error.message().c_str());
            return 5;
        }
        trace_stream.open(lockstep_root / "rtl_trace.jsonl",
                          std::ios::binary | std::ios::app);
        if (!trace_stream) {
            std::fprintf(stderr, "Cannot open RTL lockstep trace\n");
            return 5;
        }
    }
    const std::string initial_title = "Sega System 24 - " +
        (game.empty() ? std::string("unknown") : game) + " (Verilator)";
    SDL_Window* window = SDL_CreateWindow(
        initial_title.c_str(), SDL_WINDOWPOS_CENTERED,
        SDL_WINDOWPOS_CENTERED, kWidth * 2, kHeight * 2,
        SDL_WINDOW_RESIZABLE | SDL_WINDOW_ALLOW_HIGHDPI);
    SDL_Renderer* renderer = window ? SDL_CreateRenderer(
        window, -1, SDL_RENDERER_ACCELERATED) : nullptr;
    SDL_Texture* texture = renderer ? SDL_CreateTexture(
        renderer, SDL_PIXELFORMAT_RGB24, SDL_TEXTUREACCESS_STREAMING,
        kWidth, kHeight) : nullptr;
    if (!window || !renderer || !texture) {
        std::fprintf(stderr, "SDL window setup failed: %s\n", SDL_GetError());
        SDL_Quit();
        return 3;
    }
    SDL_ShowWindow(window);
    SDL_RaiseWindow(window);
    std::fprintf(stderr, "SDL video driver: %s\n",
        SDL_GetCurrentVideoDriver() ? SDL_GetCurrentVideoDriver() : "unknown");
#ifdef _WIN32
    SDL_SysWMinfo window_info{};
    SDL_VERSION(&window_info.version);
    if (SDL_GetWindowWMInfo(window, &window_info) &&
        window_info.subsystem == SDL_SYSWM_WINDOWS) {
        std::fprintf(stderr, "SDL native HWND: 0x%llx flags=0x%x\n",
            static_cast<unsigned long long>(
                reinterpret_cast<uintptr_t>(window_info.info.win.window)),
            SDL_GetWindowFlags(window));
    } else {
        std::fprintf(stderr, "SDL native window query failed: %s\n",
            SDL_GetError());
    }
#endif
    SDL_RenderSetLogicalSize(renderer, kWidth, kHeight);
    SDL_RenderSetIntegerScale(renderer, SDL_TRUE);
    if (!visible_native_window(window, "Startup SDL")) {
        std::fprintf(stderr, "SDL window is not visible; refusing headless run.\n");
        SDL_DestroyTexture(texture);
        SDL_DestroyRenderer(renderer);
        SDL_DestroyWindow(window);
        SDL_Quit();
        return 3;
    }
    std::array<uint8_t, kWidth * kHeight * 3> pixels{};
    SDL_GameController* pad = nullptr;
    for (int i = 0; i < SDL_NumJoysticks() && !pad; ++i)
        if (SDL_IsGameController(i)) pad = SDL_GameControllerOpen(i);

    VerilatedContext context;
    context.commandArgs(argc, argv);
    Vtb_gground_boot top(&context);
    top.clk = 0;
    top.host_restore = 0;
    top.host_joy0 = top.host_joy1 = top.host_joy2 = top.host_joy3 = 0;
    top.host_paddle0 = 1;

    uint64_t frames = 0;
    uint32_t prior_checksum = 0;
    uint64_t changed_frames = 0;
    uint64_t published_frames = 0;
    const std::string restore_path = plusarg_value(argc, argv, "+RESTORE=");
    if (!restore_path.empty()) {
#ifdef S24_NO_SAVABLE
        std::fprintf(stderr,
            "Cannot restore %s: full-state checkpointing is unavailable for "
            "this fx68k model.\n", restore_path.c_str());
        return 4;
#else
        VerilatedRestore stream;
        stream.open(restore_path);
        if (!stream.isOpen()) {
            std::fprintf(stderr, "Cannot open checkpoint: %s\n", restore_path.c_str());
            return 4;
        }
        stream >> &context >> frames >> prior_checksum >> changed_frames >> top;
        stream.close();
        published_frames = static_cast<uint64_t>(std::max<int64_t>(
            0, read_token(fs::path(restore_path).string() + ".token")));
        top.host_restore = 1;
        top.eval();
        top.host_restore = 0;
        top.eval();
        std::fprintf(stderr, "Restored full-state checkpoint: %s\n", restore_path.c_str());
#endif
    } else {
        top.eval();
    }

    bool running = true;
    bool save_pending = false;
    bool previous_vblank = top.host_vblank;
    uint16_t previous_x = top.host_x;
    uint16_t previous_y = top.host_y;
    bool complete_frame_available = false;
    uint64_t displayed_frames = UINT64_MAX;
    const std::string save_arg = plusarg_value(argc, argv, "+SAVE=");
    const std::string save_path = save_arg.empty() ? "gground.vltsv" : save_arg;
    const std::string autosave_arg = plusarg_value(argc, argv, "+AUTOSAVE_FRAME=");
    const uint64_t autosave_frame = autosave_arg.empty()
        ? 0 : std::strtoull(autosave_arg.c_str(), nullptr, 10);
    // A threshold without a latch would serialize the complete model on every
    // subsequent frame.  One pre-input checkpoint is enough for rapid visual
    // gameplay retries and avoids needless simulator occupancy and disk I/O.
    bool autosave_done = autosave_frame && frames >= autosave_frame;
    const bool exit_after_save =
        plusarg_value(argc, argv, "+EXIT_AFTER_SAVE=") == "1";
    const auto frame_arg = [&](const char* name) -> uint64_t {
        const std::string value = plusarg_value(argc, argv, name);
        return value.empty() ? 0 : std::strtoull(value.c_str(), nullptr, 10);
    };
    const uint64_t auto_coin_frame = frame_arg("+AUTO_COIN_FRAME=");
    const uint64_t auto_start_frame = frame_arg("+AUTO_START_FRAME=");
    const uint64_t auto_action_frame = frame_arg("+AUTO_ACTION_FRAME=");
    const uint64_t auto_pedal_frame = frame_arg("+AUTO_PEDAL_FRAME=");
    const uint64_t auto_pedal_end_frame = frame_arg("+AUTO_PEDAL_END_FRAME=");
    const uint64_t auto_pedal_value_arg = frame_arg("+AUTO_PEDAL_VALUE=");
    const uint8_t auto_pedal_value = static_cast<uint8_t>(
        std::min<uint64_t>(255, auto_pedal_value_arg));
    const uint64_t auto_input_frames_arg = frame_arg("+AUTO_INPUT_FRAMES=");
    const uint64_t auto_input_frames = std::max<uint64_t>(
        1, auto_input_frames_arg ? auto_input_frames_arg : 4);
    const uint64_t auto_capture_frame = frame_arg("+AUTO_CAPTURE_FRAME=");
    const uint64_t auto_exit_frame = frame_arg("+AUTO_EXIT_FRAME=");
    const std::string host_frame_out =
        plusarg_value(argc, argv, "+HOST_FRAME_OUT=");
    bool host_frame_written = false;
    if (auto_coin_frame || auto_start_frame || auto_action_frame ||
        auto_pedal_frame || auto_capture_frame)
        std::fprintf(stderr,
            "Automatic gameplay input: coin=%llu start=%llu action=%llu pedal=%llu..%llu value=%u capture=%llu exit=%llu pulse=%llu\n",
            static_cast<unsigned long long>(auto_coin_frame),
            static_cast<unsigned long long>(auto_start_frame),
            static_cast<unsigned long long>(auto_action_frame),
            static_cast<unsigned long long>(auto_pedal_frame),
            static_cast<unsigned long long>(auto_pedal_end_frame),
            static_cast<unsigned>(auto_pedal_value),
            static_cast<unsigned long long>(auto_capture_frame),
            static_cast<unsigned long long>(auto_exit_frame),
            static_cast<unsigned long long>(auto_input_frames));
    std::fprintf(stderr,
        "Controls: arrows/D-pad move, Z/X/C or A/B/X fire, Enter/Start, "
        "5/Back coin, Up/right trigger accelerator, F2 test, Esc quit.\n");
#ifdef S24_NO_SAVABLE
    std::fprintf(stderr,
        "Full-state checkpointing is unavailable for this fx68k model.\n");
#else
    std::fprintf(stderr, "F5 or Ctrl+S writes a full-state checkpoint.\n");
#endif

    while (running && !context.gotFinish()) {
#ifdef _WIN32
        SetPriorityClass(GetCurrentProcess(), NORMAL_PRIORITY_CLASS);
#endif
        SDL_Event event;
        while (SDL_PollEvent(&event)) {
            if (event.type == SDL_QUIT) running = false;
            if (event.type == SDL_KEYDOWN && !event.key.repeat) {
                if (event.key.keysym.sym == SDLK_ESCAPE) running = false;
                if (event.key.keysym.sym == SDLK_F5 ||
                    (event.key.keysym.sym == SDLK_s &&
                     (event.key.keysym.mod & KMOD_CTRL))) save_pending = true;
            }
        }
        uint32_t automatic_joy = 0;
        if (auto_coin_frame && frames >= auto_coin_frame &&
            frames < auto_coin_frame + auto_input_frames)
            automatic_joy |= uint32_t{1} << 11;
        if (auto_start_frame && frames >= auto_start_frame &&
            frames < auto_start_frame + auto_input_frames)
            automatic_joy |= uint32_t{1} << 10;
        if (auto_action_frame && frames >= auto_action_frame &&
            frames < auto_action_frame + auto_input_frames)
            automatic_joy |= uint32_t{1} << 4;
        const uint8_t automatic_pedal =
            auto_pedal_frame && frames >= auto_pedal_frame &&
            (!auto_pedal_end_frame || frames < auto_pedal_end_frame)
                ? (auto_pedal_value ? auto_pedal_value : 0xff) : 0;
        set_inputs(top, pad, automatic_joy, automatic_pedal);

        for (int half_cycle = 0; half_cycle < 100000 && running; ++half_cycle) {
            top.clk = !top.clk;
            top.eval();
            if (lockstep && top.clk && top.host_trace_valid &&
                    !fs::exists(lockstep_root / "TRACE_STOP.txt") &&
                    !append_trace(trace_stream, published_frames, top)) {
                std::fprintf(stderr, "Cannot append RTL lockstep trace\n");
                running = false;
            }
            const bool raster_advanced = top.clk &&
                (top.host_x != previous_x || top.host_y != previous_y);
            if (raster_advanced && !top.host_hblank &&
                !top.host_vblank && top.host_x < kWidth && top.host_y < kHeight) {
                const size_t p = (size_t(top.host_y) * kWidth + top.host_x) * 3;
                pixels[p] = top.host_red;
                pixels[p + 1] = top.host_green;
                pixels[p + 2] = top.host_blue;
            }
            const bool frame_start = raster_advanced &&
                previous_vblank && !top.host_vblank;
            if (frame_start) {
                ++frames;
                if (complete_frame_available) {
                    const uint32_t now = checksum(pixels);
                    if (now != prior_checksum) ++changed_frames;
                    if (frames <= 3 || (frames % 30) == 0 || now != prior_checksum)
                        std::fprintf(stderr, "frame=%llu checksum=%08x changed=%llu\n",
                            static_cast<unsigned long long>(frames), now,
                            static_cast<unsigned long long>(changed_frames));
                    prior_checksum = now;
                    if (!host_frame_written && auto_capture_frame &&
                        frames >= auto_capture_frame && !host_frame_out.empty()) {
                        host_frame_written =
                            visible_native_window(window, "Gameplay proof") &&
                            write_native_ppm(host_frame_out, pixels);
                        std::fprintf(stderr, "%s gameplay frame %llu: %s\n",
                            host_frame_written ? "Captured" : "Failed to capture",
                            static_cast<unsigned long long>(frames),
                            host_frame_out.c_str());
                        if (!host_frame_written) running = false;
                    }
                    if (lockstep) {
                        ++published_frames;
                        char filename[64];
                        std::snprintf(filename, sizeof(filename),
                                      "frame_%06llu.ppm",
                                      static_cast<unsigned long long>(published_frames));
                        const bool frame_ok = write_native_ppm(
                            lockstep_root / "rtl" / filename, pixels);
                        const bool state_ok = append_state(
                            lockstep_root / "rtl_state.jsonl", published_frames,
                            now, top);
                        trace_stream.flush();
                        const bool token_ok = atomic_text(
                            lockstep_root / "rtl_frame.txt",
                            std::to_string(published_frames) + "\n");
                        if (!frame_ok || !state_ok || !token_ok) {
                            std::fprintf(stderr,
                                "Lockstep publish failed at frame %llu\n",
                                static_cast<unsigned long long>(published_frames));
                            running = false;
                        }
                        while (running &&
                               read_token(lockstep_root / "release_frame.txt") <
                                   static_cast<int64_t>(published_frames)) {
                            SDL_Event wait_event;
                            while (SDL_PollEvent(&wait_event)) {
                                if (wait_event.type == SDL_QUIT ||
                                    (wait_event.type == SDL_KEYDOWN &&
                                     wait_event.key.keysym.sym == SDLK_ESCAPE))
                                    running = false;
                            }
                            if (fs::exists(lockstep_root / "STOP.txt"))
                                running = false;
                            SDL_UpdateTexture(texture, nullptr, pixels.data(), kWidth * 3);
                            SDL_RenderClear(renderer);
                            SDL_RenderCopy(renderer, texture, nullptr, nullptr);
                            SDL_RenderPresent(renderer);
                            std::this_thread::sleep_for(std::chrono::milliseconds(10));
                        }
                        if (fs::exists(lockstep_root / "STOP.txt"))
                            running = false;
                    }
                }
                complete_frame_available = true;
                if (autosave_frame && !autosave_done &&
                    frames >= autosave_frame) {
                    save_pending = true;
                    autosave_done = true;
                }
                if (auto_exit_frame && frames >= auto_exit_frame)
                    running = false;
            }
            if (top.clk) {
                previous_x = top.host_x;
                previous_y = top.host_y;
                previous_vblank = top.host_vblank;
            }
            if (save_pending && frame_start) {
                const bool saved = save_checkpoint(context, top, save_path,
                                                   frames, prior_checksum,
                                                   changed_frames,
                                                   published_frames);
                if (!saved)
                    std::fprintf(stderr, "Checkpoint failed: %s\n", save_path.c_str());
                save_pending = false;
                if (exit_after_save) running = false;
            }
            if (context.gotFinish()) break;
        }

        // Present once per native frame.  Presenting every 100k-half-cycle
        // event-poll chunk made a v-synchronised host wait roughly eleven
        // times for each System 24 frame and dominated checkpoint sweeps.
        // Event polling remains chunk-rate, so the accelerated window stays
        // visible and responsive while simulation runs without host pacing.
        if (displayed_frames != frames) {
            SDL_UpdateTexture(texture, nullptr, pixels.data(), kWidth * 3);
            SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
            SDL_RenderClear(renderer);
            SDL_RenderCopy(renderer, texture, nullptr, nullptr);
            SDL_RenderPresent(renderer);
            char title[192];
            std::snprintf(title, sizeof(title),
                "Sega System 24 %s - frame %llu changes %llu%s",
                game.empty() ? "" : game.c_str(),
                static_cast<unsigned long long>(frames),
                static_cast<unsigned long long>(changed_frames),
                save_pending ? " - checkpoint pending" : "");
            SDL_SetWindowTitle(window, title);
            displayed_frames = frames;
        }
    }

    top.final();
    if (pad) SDL_GameControllerClose(pad);
    SDL_DestroyTexture(texture);
    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    SDL_Quit();
    return 0;
}
