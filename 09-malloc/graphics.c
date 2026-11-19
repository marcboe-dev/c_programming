#include "raylib.h"
#include <math.h>
#include <stdlib.h>
#include <time.h>

#define AMPLITUDE 120
#define WIDTH 900
#define HEIGHT 600

typedef struct {
    double d, angle, speed, radius; // d := distance from center
    Color color;
} Circle;

void draw_circle(Circle *circle)
{
    double angle = circle->angle;

    //find x,y at which to draw the circle
    double x = AMPLITUDE*sin(angle) + WIDTH / 2;
    double y = AMPLITUDE*cos(angle) + HEIGHT / 2;
    DrawCircle( (int) x, (int) y, circle->radius, circle->color);
}

void move_circle(Circle *circle, float time_difference)
{
    circle->angle += circle->speed * time_difference;
}

void generate_circle(Circle *circle) 
{
    circle->d = rand() % 101; //returns number between 0...100
    circle->angle = 0;
    circle->speed = rand() % 9 + 1; // generates random number between 1...9
    circle->radius = rand() % 40; 

    //randomize color
    circle->color.r = rand() % 256;
    circle->color.g = rand() % 256;
    circle->color.b = rand() % 256;
    circle->color.a = 255; //alpha-value sets opacity (=transparency); 255 = fulle opaque/non-transparent
}

int main(void)
{
    InitWindow(WIDTH, HEIGHT, "Graphics in C");
    srand(time(NULL)); //based on seed we will get random results for the colors

    Circle circle;
    generate_circle(&circle);
    SetTargetFPS(60);
    while (!WindowShouldClose())
    {

        move_circle(&circle, GetFrameTime());

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

