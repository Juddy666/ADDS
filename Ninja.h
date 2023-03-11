#include "Move.h"
#ifndef NINJA_H
#define NINJA_H
class Ninja : public Move{
    public:
        Ninja();
        int compareMove(Move* opponentMove);
};


#endif //NINJA_H