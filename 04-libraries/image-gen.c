#include <stdio.h>
#include "TinyPngOut.h"
#include <stdbool.h>

#define HEIGHT 400
#define WIDTH 400

int main() {

    // initializing struct
    struct TinyPngOut tinyPng;

    // Initializing picture
    FILE *my_png = fopen("my_png.png", "w");
    TinyPngOut_init(&tinyPng, WIDTH, HEIGHT, my_png);

    uint8_t pixel_clr_mint [] = { 101, 216, 155 };
    uint8_t pixel_clr_yellow [] = { 255, 234, 5 };

    // do some image generation here
    printf("Generating image ...\n");

    bool on = true;
    for (int y=0; y<HEIGHT; y++) {
        if ( y % 10 == 0)  {
            on = !on;
        };
        for (int x=0; x<WIDTH; x++) {
            if ( x % 10 == 0)  {
                on = !on;
            };
            if (on) TinyPngOut_write(&tinyPng, pixel_clr_mint, 1);
            else TinyPngOut_write(&tinyPng, pixel_clr_yellow, 1);
        }
    }
    printf("Done\n");
}
