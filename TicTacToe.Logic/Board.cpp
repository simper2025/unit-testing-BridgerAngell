#include "pch.h"
#include "Board.h"

void Board::SetBoard(char setup[3][3])
{

}

char Board::GetSquare(int row, int col) const
{
    // Checks if row and column are valid
    if (row >= 0 && row < 3 && col >= 0 && col < 3) 
    {
        return grid[row][col];
    }
    return ' ';
}

bool Board::SetSquare(int row, int col, char player)
{
    // within bounds
    if (row < 0 || row >= 3 || col < 0 || col >= 3) 
    {
        return false;
    }

    // checks if empty
    if (grid[row][col] != ' ') 
    {
        return false;
    }

    // symbol set
    grid[row][col] = player;
    return true;
}

char Board::GameStatus()
{
    
    return ' ';
}