#include "Paper.h"
#include "Move.h"

Paper::Paper(){
    moveName = "Paper";
}

bool Paper::compareMove(Move* opponentMove){
    if(opponentMove->getName() == "Rock"){
        return 1;
    }
    else{
        return 0;
    }
}