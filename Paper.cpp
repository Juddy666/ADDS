#include "Paper.h"
#include "Move.h"

Paper::Paper(){
    moveName = "Paper";
}

int Paper::compareMove(Move* opponentMove){
    if(opponentMove->getName() == "Rock"){
        return 1;
    }
    else if(opponentMove->getName() == "Paper"){
        return 2;
    }
    else{
        return 0;
    }
}