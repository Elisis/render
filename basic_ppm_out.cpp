#include <iostream>
#include "color.hpp"
#define IMAGE_HEIGHT 400
#define IMAGE_WIDTH 600
#define MAX_COLOUR 255


int main() {

    // PPM header info
    std::cout << "P3" << '\n' << IMAGE_WIDTH << ' ' << IMAGE_HEIGHT << '\n' << MAX_COLOUR << std::endl;

    for (int i = IMAGE_HEIGHT - 1; i >= 0; i--) {

        for (int j = 0; j <= IMAGE_WIDTH - 1; j++) {

            double r = double(i) / (IMAGE_HEIGHT - 1); // Redness decreases with height
            double b = double(j) / (IMAGE_WIDTH - 1); // Blueness increases with width
            double g = 0.25 * (r + b) / MAX_COLOUR; 

            vec3 pixel_color(r, g, b);

            write_color(std::cout, pixel_color);

        }

    }
    
}