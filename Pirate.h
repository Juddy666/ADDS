
#include <string>
#include "Move.h"
#ifndef PIRATE_H
#define PIRATE_H
using namespace std;

class Pirate : public Move{
    public:
        Pirate();
  bool compareMove(Move* opponentMove);
};


#endif //PIRATE_H