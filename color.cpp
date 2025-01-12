#include <iostream>
#include "vec3.hpp"
#include "color.hpp"

void write_color(std::ostream &out, vec3 pixel_color) {
    out << static_cast<int>(255.99 * pixel_color.x()) 
        << ' ' << static_cast<int>(255.99 * pixel_color.y()) 
        << ' ' << static_cast<int>(255.99 * pixel_color.z()) 
        << '\n';
}