#include "Move.h"
#ifndef NINJA_H
#define NINJA_H
class Ninja : public Move{
    public:
        Ninja();
        bool compareMove(Move* opponentMove);
};


#endif //NINJA_H