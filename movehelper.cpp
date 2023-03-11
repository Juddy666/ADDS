#include "Human.h"
#include "movehelper.h"
#include "Move.h"
#include "Zombie.h"
#include "Robot.h"
#include "Pirate.h"
#include "Ninja.h"
#include "Monkey.h"
#include "Paper.h"
#include "Scissors.h"
#include "Rock.h"
#include <string>
using namespace std;
Move* movehelper::movedetect(string moveName){
    Move* returnedMove;
    if(moveName=="Zombie"){
        returnedMove = new Zombie();
    }   
    else if(moveName == "Robot"){
        returnedMove = new Robot();
    }
    else if(moveName == "Pirate"){
        returnedMove = new Pirate();
    }
    else if(moveName == "Ninja"){
        returnedMove = new Ninja();
    }
    else if(moveName == "Monkey"){
        returnedMove = new Monkey();
    }
    else if(moveName == "Paper"){
        returnedMove = new Paper();
    }
    else if(moveName == "Scissors"){
        returnedMove = new Scissors;
    }
    else{
        returnedMove = new Rock();
    }
    return returnedMove;
};
