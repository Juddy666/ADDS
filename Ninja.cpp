#include "Ninja.h"

Ninja::Ninja(){
    moveName = "Ninja";
}
    int Ninja::compareMove(Move* opponentMove){
         if(opponentMove->getName() == "Pirate"||opponentMove->getName() == "Zombie"){
        return 1;
        }
        else if(opponentMove->getName()== "Ninja"){
            return 2;
        }
        else{ 
            return 0;
        }
}
    
