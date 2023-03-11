#include <iostream>
#include <string>
#include "Move.h"
#include "Pirate.h"

using namespace std;

Pirate::Pirate(){
    moveName = "Pirate";
}

int Pirate::compareMove(Move* opponentMove){
    if(opponentMove->getName() == "Robot"||opponentMove->getName() == "Monkey"){
        return 1;
    }
    else if(opponentMove->getName() == "Pirate"){
        return 2;
    }
    else{ 
        return 0;
    }
}