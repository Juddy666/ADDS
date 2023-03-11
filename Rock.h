#ifndef ROCK_H
#define ROCK_H
#include "Move.h"

class Rock : public Move{
    public:
    Rock();
    int compareMove(Move* opponentMove);

};

#endif //ROCK_H