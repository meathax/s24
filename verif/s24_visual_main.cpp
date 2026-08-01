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

#include <array>
#include <cstdlib>
#include <cstdint>
#include <cstdio>
#include <string>

#include "Vtb_gground_boot.h"
#include "verilated.h"
#include "verilated_save.h"

double sc_time_stamp() { return 0.0; }

namespace {
constexpr int kWidth = 496;
constexpr int kHeight = 384;

std::string plusarg_value(int argc, char** argv, const char* prefix) {
    const std::string needle(prefix);
    for (int i = 1; i < argc; ++i) {
        const std::string arg(argv[i]);
        if (arg.rfind(needle, 0) == 0) return arg.substr(needle.size());
    }
    return {};
}

void set_inputs(Vtb_gground_boot& top, SDL_GameController* pad) {
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
    top.host_joy0 = joy;
    top.host_joy1 = top.host_joy2 = top.host_joy3 = 0;
}

uint32_t checksum(const std::array<uint8_t, kWidth * kHeight * 3>& pixels) {
    uint32_t value = 0x811c9dc5U;
    for (const uint8_t byte : pixels) value = (value ^ byte) * 0x01000193U;
    return value;
}

bool save_checkpoint(VerilatedContext& context, Vtb_gground_boot& top,
                     const std::string& path, uint64_t frames,
                     uint32_t prior_checksum, uint64_t changed_frames) {
#ifdef S24_NO_SAVABLE
    (void)context;
    (void)top;
    (void)path;
    (void)frames;
    (void)prior_checksum;
    (void)changed_frames;
    std::fprintf(stderr,
        "Full-state checkpointing is unavailable for this fx68k model.\n");
    return false;
#else
    VerilatedSave stream;
    stream.open(path);
    if (!stream.isOpen()) return false;
    stream << &context << frames << prior_checksum << changed_frames << top;
    stream.close();
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
    SDL_Window* window = SDL_CreateWindow(
        "Sega System 24 - Gain Ground (Verilator)", SDL_WINDOWPOS_CENTERED,
        SDL_WINDOWPOS_CENTERED, kWidth * 2, kHeight * 2,
        SDL_WINDOW_RESIZABLE | SDL_WINDOW_ALLOW_HIGHDPI);
    SDL_Renderer* renderer = window ? SDL_CreateRenderer(
        window, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC) : nullptr;
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

    uint64_t frames = 0;
    uint32_t prior_checksum = 0;
    uint64_t changed_frames = 0;
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
    const std::string save_arg = plusarg_value(argc, argv, "+SAVE=");
    const std::string save_path = save_arg.empty() ? "gground.vltsv" : save_arg;
    const std::string autosave_arg = plusarg_value(argc, argv, "+AUTOSAVE_FRAME=");
    const uint64_t autosave_frame = autosave_arg.empty()
        ? 0 : std::strtoull(autosave_arg.c_str(), nullptr, 10);
    const bool exit_after_save =
        plusarg_value(argc, argv, "+EXIT_AFTER_SAVE=") == "1";
    std::fprintf(stderr,
        "Controls: arrows/D-pad move, Z/X/C or A/B/X fire, Enter/Start, "
        "5/Back coin, F2 test, Esc quit.\n");
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
        set_inputs(top, pad);

        for (int half_cycle = 0; half_cycle < 100000 && running; ++half_cycle) {
            top.clk = !top.clk;
            top.eval();
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
                }
                complete_frame_available = true;
                if (autosave_frame && frames >= autosave_frame)
                    save_pending = true;
            }
            if (top.clk) {
                previous_x = top.host_x;
                previous_y = top.host_y;
                previous_vblank = top.host_vblank;
            }
            if (save_pending && frame_start) {
                const bool saved = save_checkpoint(context, top, save_path,
                                                   frames, prior_checksum,
                                                   changed_frames);
                if (!saved)
                    std::fprintf(stderr, "Checkpoint failed: %s\n", save_path.c_str());
                save_pending = false;
                if (exit_after_save) running = false;
            }
            if (context.gotFinish()) break;
        }

        SDL_UpdateTexture(texture, nullptr, pixels.data(), kWidth * 3);
        SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
        SDL_RenderClear(renderer);
        SDL_RenderCopy(renderer, texture, nullptr, nullptr);
        SDL_RenderPresent(renderer);
        char title[192];
        std::snprintf(title, sizeof(title),
            "Sega System 24 - frame %llu changes %llu%s",
            static_cast<unsigned long long>(frames),
            static_cast<unsigned long long>(changed_frames),
            save_pending ? " - checkpoint pending" : "");
        SDL_SetWindowTitle(window, title);
    }

    top.final();
    if (pad) SDL_GameControllerClose(pad);
    SDL_DestroyTexture(texture);
    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    SDL_Quit();
    return 0;
}
