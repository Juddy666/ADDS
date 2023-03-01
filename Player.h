#include <iostream>
#include <string>
#ifndef PLAYER_H
#define PLAYER_H
using namespace std;

class Player{
    protected: 
        string name;
    public:
        
        Player();
        Player(string name);
        virtual char makeMove( ) = 0;
        string getName( );
        
};



#endif //PLAYER_H