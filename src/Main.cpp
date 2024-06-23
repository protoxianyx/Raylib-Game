#include <iostream>
#include "raylib.h"
#include "Grid.h"

int main(void)
{
    InitWindow(300, 600, "Simple C++ Game: Tetris");
    SetTargetFPS(60);

    Grid grid = Grid();
    
    grid.grid[0][0] = 1;
    grid.grid[3][5] = 4;
    grid.grid[14][9] = 17;

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