#include "Move.h"
#ifndef ROBOT_H
#define ROBOT_H

class Robot : public Move{
    public:
        Robot();
        bool compareMove(Move* opponentMove);
};

#endif //ROBOT_H