#include <iostream>

#include "../include/game.h"

using namespace std;

void Board::show() const {
  for (int i = 0; i < 3; i++) {
    cout << " --- --- --- \n";
    cout << "| " << grid[i][0] << " | " << grid[i][1] << " | " << grid[i][2]
         << " |\n";
  }

  cout << " --- --- ---\n";
}

bool Board::place(int row, int col, char player) {
  if (row > 2 || row < 0) return false;
  if (col > 2 || col < 0) return false;
  if (grid[row][col] != ' ') return false;

  grid[row][col] = player;
  return true;
}

bool Board::checkWin(char player) const {
  for (int i = 0; i < 3; i++) {
    if (grid[i][0] == player && grid[i][1] == player && grid[i][2] == player)
      return true;
    if (grid[0][i] == player && grid[1][i] == player && grid[2][i] == player)
      return true;
  }

  if (grid[0][0] == player && grid[1][1] == player && grid[2][2] == player)
    return true;
  if (grid[0][2] == player && grid[1][1] == player && grid[2][0] == player)
    return true;

  return false;
}

void Board::reset() {
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      grid[i][j] = ' ';
    }
  }
}