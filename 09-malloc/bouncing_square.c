#include "raylib.h"

#define WIDTH 900
#define HEIGHT 600

int main(void) {

    SetConfigFlags(FLAG_WINDOW_HIGHDPI);
    InitWindow(WIDTH, HEIGHT, "example window for my bouncing square project");

    Rectangle box = { 
        WIDTH/2.0f-50,                // Rectangle top-left corner position x
        HEIGHT/2.0f-50,               // Rectangle top-left corner position y
        100,                       // Rectangle width
        100,                       // Rectangle height
    };

    float speedx = 2.0f;
    float speedy = 2.0f;

    SetTargetFPS(60);
    while (!WindowShouldClose()) {

        // move box
        box.x += speedx;
        box.y += speedy;

        // bounce on borders
        if (box.y + box.height >= GetScreenHeight() || (box.y <= 0)) {
            speedy *= -1;
        } 
        if ((box.x + box.width) >= GetScreenWidth() || (box.x <= 0)) {
            speedx *= -1;
        } 


        //Draw
        BeginDrawing();
            ClearBackground(BLACK);

            DrawRectangleRec(box, ORANGE);

        EndDrawing();
    }
    CloseWindow();

    return 0;
}
