#include "Move.h"
#include "Scissors.h"

Scissors::Scissors(){
    moveName = "Scissors";
}

int Scissors::compareMove(Move* opponentMove){
    if (opponentMove->getName() == "Paper"){
        return 1;
    }
    else if(opponentMove->getName() == "Scissors"){
        return 2;
    }
    else{
        return 0;
    }
}