#include <string>
#include "Move.h"
#ifndef PLAYER_H
#define PLAYER_H
using namespace std;

class Player{
    protected: 
        string name;
    public:
        Player();
        Player(string new_name);
        virtual Move* makeMove() = 0;
        string getName( );
        
};

#endif //PLAYER_H