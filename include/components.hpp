#ifndef COMPONENTS_HPP
#define COMPONENTS_HPP

#include <SDL2/SDL.h>

#include <cstdint> // Include for std::uint8_t

// Define a struct for color with RGBA components
struct Color {
    std::uint8_t r;
    std::uint8_t g;
    std::uint8_t b;
    std::uint8_t a;

    // Constructor with parameters for RGBA values
    Color(std::uint8_t red, std::uint8_t green, std::uint8_t blue, std::uint8_t alpha)
        : r(red), g(green), b(blue), a(alpha) {}
};

struct Position {
    int x;
    int y;
};

struct Size {
    int width;
    int height;
};

#endif