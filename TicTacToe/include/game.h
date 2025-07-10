#pragma once
#include "board.h"

class Game {
  Board board_;

 public:
  void run();
  void reset();
};