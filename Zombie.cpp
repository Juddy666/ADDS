#include <iostream>
#include <string>
#include "Move.h"
#include "Zombie.h"

using namespace std;

Zombie::Zombie(){
    moveName = "Zombie";
}

bool Zombie::compareMove(Move* opponentMove){
    if(opponentMove->getName() == "Pirate"||opponentMove->getName()=="Monkey"){
        return 1;
    }
    else{
        return 0;
    }
}