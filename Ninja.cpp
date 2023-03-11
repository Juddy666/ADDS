#include "Ninja.h"

Ninja::Ninja(){
    moveName = "Ninja";
}
    bool Ninja::compareMove(Move* opponentMove){
         if(opponentMove->getName() == "Pirate"||opponentMove->getName() == "Zombie"){
        return 1;
    }
    else{ 
        return 0;
    }
}
    
