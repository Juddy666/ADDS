#include "Robot.h"
Robot::Robot(){
    moveName="Robot";
}
int Robot::compareMove(Move* opponentMove){
    if(opponentMove->getName() == "Ninja"||opponentMove->getName() == "Zombie"){
        return 1;
    }
    else if(opponentMove->getName() == "Robot"){
        return 2;
    }
    else{ 
        return 0;
    }
}