#include "Move.h"
#ifndef MONKEY_H
#define MONKEY_H

class Monkey : public Move{
    public: 
        Monkey();
        int compareMove(Move* opponentMove);

};
#endif //MONKEY_H