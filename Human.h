#include <iostream>
#include <string>
#include <Player.h>
#ifndef HUMAN_H
#define HUMAN_H
using namespace std;

class Human : public Player{
    public:
    char makeMove();
};

#endif //HUMAN_H