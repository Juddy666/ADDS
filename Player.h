#ifndef PLAYER_H
#define PLAYER_H
#include <iostream>
#include <string>

using namespace std;

class Player{
    protected:
        string allmoves;
        int moveCount;

    public:
        Player();
        virtual void move()=0;
        //string getMoves();
        char getMove();
        bool win(Player *Oppenent);
};

#endif //PLAYER_H