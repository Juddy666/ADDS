#include <iostream>
#include <string>
#include "Move.h"
#ifndef ZOMBIE_H
#define ZOMBIE_H
using namespace std;

class Zombie: public Move{
    public: 
        Zombie();
        bool compareMove(Move* opponentMove);
};


#endif //ZOMBIE_H