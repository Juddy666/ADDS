#include "Robot.h"
Robot::Robot(){
    moveName="robot";
}
bool Robot::compareMove(Move* opponentMove){
    if(opponentMove->getName() == "Ninja"||opponentMove->getName() == "Zombie"){
        return 1;
    }
    else{ 
        return 0;
    }
}