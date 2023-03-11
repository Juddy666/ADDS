#ifndef PAPER_H
#define PAPER_H
#include "Move.h"

class Paper : public Move{
    public:
        Paper();
        int compareMove(Move* opponentMove);
};

#endif //PAPER_H