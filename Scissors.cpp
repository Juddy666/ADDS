#include "Move.h"
#include "Scissors.h"

Scissors::Scissors(){
    moveName = "Scissors";
}

bool Scissors::compareMove(Move* opponentMove){
    if (opponentMove->getName() == "Paper"){
        return 1;
    }
    else{
        return 0;
    }
}