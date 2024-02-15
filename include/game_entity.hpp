#ifndef GAME_ENTITY_HPP
#define GAME_ENTITY_HPP

#include <SDL2/SDL.h>

class GameEntity {
public:
    SDL_Point getPosition() const;
    SDL_Rect getSize() const;
    SDL_Color getColor() const;
    GameEntity(SDL_Renderer* renderer, int x, int y, int width, int height, Uint8 r, Uint8 g, Uint8 b);
    void update();
    void render(SDL_Renderer* renderer);
    // void setPosition(int x, int y) { position.x = x; position.y = y; }
    // void move(int dx, int dy) { position.x += dx; position.y += dy; }
    void setSize(int width, int height) { size.w = width; size.h = height; }
    void setColor(Uint8 r, Uint8 g, Uint8 b) { color.r = r; color.g = g; color.b = b; }
private:
    SDL_Rect rect;
    SDL_Point position;
    // SDL_Point velocity;
    SDL_Rect size;
    SDL_Color color;
};

inline SDL_Point GameEntity::getPosition() const {
    return position;
}

inline SDL_Rect GameEntity::getSize() const {
    return size;
}

inline SDL_Color GameEntity::getColor() const {
    return color;
}

#endif // GAME_ENTITY_HPP
