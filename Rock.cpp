#include "Move.h"
#include "Rock.h"

Rock::Rock(){
    moveName = "Rock";
}

bool Rock::compareMove(Move* opponentMove){
    if(opponentMove->getName()=="Scissors"){
        return 1;
    }
    else {
        return 0;
    }

}