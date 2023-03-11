#ifndef SCISSORS_H
#define SCISSORS_H
#include "Move.h"

class Scissors : public Move{
    public:
    Scissors();
    int compareMove(Move* opponentMove);
};

#endif //SCISSORS_H