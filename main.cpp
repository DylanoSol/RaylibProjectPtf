#include "raylib.h"

int main()
{
    InitWindow(800, 450, "raylib via Properties");
    while (!WindowShouldClose())
    {
        BeginDrawing();
        ClearBackground(RAYWHITE);
        EndDrawing();
    }
    CloseWindow();
}