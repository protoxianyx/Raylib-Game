#include <iostream>
#include "raylib.h"
#include "Grid.h"

int main(void)
{
    InitWindow(300, 600, "Simple C++ Game: Tetris");
    SetTargetFPS(60);

    Grid grid = Grid();

    grid.Print();

    while (!WindowShouldClose())
    {
        BeginDrawing();
        ClearBackground(BLUE);
        grid.Draw();
        EndDrawing();
    }

    CloseWindow();

    return 0;

    
}