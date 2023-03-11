#include <iostream>
#include <string>
#include "Move.h"

using namespace std;

Move::Move(){
    moveName = "blank";
}

// Move::Move(string _moveName){
//     _moveName = moveName;
// }

// Move::compareMove(Move opponentMove){   
// }


string Move::getName(){
    return moveName;
}

// void Move::setMoveName(string newMoveName){
//     moveName = newMoveName;
// }



