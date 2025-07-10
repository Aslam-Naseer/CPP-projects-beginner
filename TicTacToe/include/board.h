#pragma once

class Board {
 private:
  char grid[3][3] = {{' ', ' ', ' '}, {' ', ' ', ' '}, {' ', ' ', ' '}};

 public:
  void show() const;
  bool place(int row, int col, char player);
  bool checkWin(char player) const;
  void reset();
};