#ifndef APP_HPP
#define APP_HPP

#include <SDL2/SDL.h>

class App {
public:
    App();
    void init();
    void run();
    void clean();
private:
    SDL_Window* window;
    SDL_Renderer* renderer;
    bool isRunning;
};

#endif