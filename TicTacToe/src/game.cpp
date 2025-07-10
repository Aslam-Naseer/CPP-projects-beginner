#include "../include/game.h"

#include <iostream>

using namespace std;

void Game::run() {
  int move = 0;

  while (move < 9) {
    board_.show();
    int row, col;
    char player = (move % 2) ? 'O' : 'X';

    cout << "Player " << player << " move: (row col) ";
    cin >> row >> col;

    while (board_.place(row, col, player) == false) {
      cout << "Already placed. try again: (row col) ";
      cin >> row >> col;
    }

    if (board_.checkWin(player) == true) {
      board_.show();
      cout << "Player " << player << " Won!\n";
      break;
    }

    move++;
  }

  if (move == 9) {
    cout << "It's a draw!\n";
  }
}

void Game::reset() { board_.reset(); }