/*
 * Animate a square that bounces off the edges of the screen
 *
 * 1. Draw a square
 * 2. Make the square move in one direction first
 *
 *
 */

#include "raylib.h"

#define WIDTH 900
#define HEIGHT 600

int main(void)
{
    InitWindow(800, 450, "Graphics in c");

    while (!WindowShouldClose())
    {
        BeginDrawing();
            ClearBackground(RAYWHITE);
            DrawText("My first graphics project", 190, 200, 20, LIGHTGRAY);
            DrawRectangle(450, 300, WIDTH, HEIGHT, ORANGE);
        EndDrawing();
    }

    CloseWindow();

    return 0;
}
