#include "game_entity.hpp"

GameEntity::GameEntity(SDL_Renderer* renderer, int x, int y, int width, int height, Uint8 r, Uint8 g, Uint8 b) {
    rect = { x, y, width, height };
    color = { r, g, b, 255 };
}

void GameEntity::update() {
    // setPosition( position.x + 10, position.y + 10 );
    // move( 10, 10 );
    // position.x += velocity.x;
    // position.y += velocity.y;
}

void GameEntity::render(SDL_Renderer* renderer) {
    SDL_SetRenderDrawColor(renderer, color.r, color.g, color.b, color.a);
    SDL_RenderFillRect(renderer, &rect);
}
