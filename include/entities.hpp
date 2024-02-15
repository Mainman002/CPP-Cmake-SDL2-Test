#ifndef ENTITIES_HPP
#define ENTITIES_HPP

#include "components.hpp"
#include <SDL2/SDL.h>

struct TestGameEntity {
    Position position;
    Size size;
    bool free;
};

#endif
