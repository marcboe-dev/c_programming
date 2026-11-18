#include "raylib.h"
#include <math.h>

#define AMPLITUDE 120
#define WIDTH 900
#define HEIGHT 600

typedef struct {
    double d, angle, speed, radius;
    Color color;
} Circle;

void draw_circle(Circle *circle)
{
    double angle = circle->angle;

    //find x,y at which to draw the circle
    double x = AMPLITUDE*sin(angle) + WIDTH / 2;
    double y = AMPLITUDE*cos(angle) + HEIGHT / 2;
    DrawCircle( (int) x, (int) y, 50, RED);
}

void move_circle(Circle *circle, float time_difference)
{
    circle->angle += circle->speed * time_difference;
}

int main(void)
{
    InitWindow(WIDTH, HEIGHT, "Graphics in C");

    Circle circle = { 40,0,10,15,RED};
    SetTargetFPS(60);
    while (!WindowShouldClose())
    {
        BeginDrawing();
            ClearBackground(BLACK);
            DrawFPS(20,20);
            DrawText("No-Nonsense Programming Animation", 120, 20, 20, LIGHTGRAY);
            // draw anything here
            draw_circle(&circle);

        EndDrawing();
    }

    CloseWindow();

    return 0;
}

