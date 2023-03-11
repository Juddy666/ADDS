#include "Move.h"
#include "Rock.h"

Rock::Rock(){
    moveName = "Rock";
}

int Rock::compareMove(Move* opponentMove){
    if(opponentMove->getName()=="Scissors"){
        return 1;
    }
    else if(opponentMove->getName() == "Rock"){
        return 2;
    }
    else {
        return 0;
    }

}