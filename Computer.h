#include <iostream>
#include <string>
#include "Player.h"
#ifndef COMPUTER_H
#define COMPUTER_H
using namespace std;

class Computer : public Player{
    public:
        Computer();
        char makeMove();
};

#endif //COMPUTER_H