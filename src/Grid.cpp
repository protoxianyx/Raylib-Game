#include "Grid.h"
#include <iostream>

Grid::Grid()
{
    numRows = 20;
    numColumns = 10;
    cellSize = 30;
    Initialize();
}

void Grid::Initialize()
{
    for (int row = 0; row < numRows; row++)
    {
        for (int column = 0; column < numColumns; column++)
        {
            grid[row][column] = 0;
        }
    }
}
