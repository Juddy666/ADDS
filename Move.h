#include <iostream>
#include <string>

#ifndef MOVE_H
#define MOVE_H

using namespace std;

class Move{
    protected:
       string moveName;
    public: 
        Move();
        //Move(string _moveName);
        virtual int compareMove(Move* opponentMove)=0;
        string getName();
        // void setMoveName(string newMoveName);

};

#endif //MOVE_H