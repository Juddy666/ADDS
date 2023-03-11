#include <iostream>
#include <string>
#include "Player.h"
#include "Move.h"
#ifndef COMPUTER_H
#define COMPUTER_H
using namespace std;

class Computer : public Player{
    public:
        Computer();
        Move* makeMove();
};

#endif //COMPUTER_H