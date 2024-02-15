#include "app.hpp"
#include "components.hpp"
#include "entities.hpp"
#include "game_entity.hpp"
#include <vector>

App::App() : window(nullptr), renderer(nullptr), isRunning(true) {}
std::vector<GameEntity> game_objects;

void App::init() {
    SDL_Init(SDL_INIT_VIDEO);
    window = SDL_CreateWindow("C++ Hello SDL2", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 1280, 800, SDL_WINDOW_SHOWN);
    renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);
}

void App::run() {    
    // Renderer, X, Y, Width, Height, Red, Green, Blue
    game_objects.push_back(GameEntity(renderer, 32, 32, 32, 32, 255, 0, 0));
    game_objects.push_back(GameEntity(renderer, 128, 64, 32, 64, 0, 255, 0));

    while (isRunning) {
        SDL_Event event;
        while (SDL_PollEvent(&event)) {
            if (event.type == SDL_QUIT) {
                isRunning = false;
            }
        }

        SDL_SetRenderDrawColor(renderer, 70, 130, 170, 255);
        SDL_RenderClear(renderer);

        // Update
        for (auto& gameObject : game_objects) {
            gameObject.update();
        }

        // Draw
        for (auto& gameObject : game_objects) {
            gameObject.render(renderer);
        }

        SDL_RenderPresent(renderer);
        SDL_Delay(1000 / 60);
    }
    clean();
}

void App::clean() {
    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    SDL_Quit();
}
