#include <iostream>
#include <string>
#include "Player.h"
#include "movehelper.h"
#ifndef HUMAN_H
#define HUMAN_H
using namespace std;

class Human : public Player{
    public:
    Human();
    Human(string name);
    Move* makeMove();
};

#endif //HUMAN_H