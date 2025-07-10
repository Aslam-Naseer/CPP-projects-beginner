// simple hello world program
#include <iostream>

#include "../include/game.h"

using namespace std;

int main() {
  Game game;
  char play = 'y';
  while (play == 'y' || play == 'Y') {
    game.run();
    game.reset();

    cout << "\n New game? ";
    cin >> play;
  }
  return 0;
}