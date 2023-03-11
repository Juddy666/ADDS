#include "Monkey.h"
#include "Move.h"
#include <string>
using namespace std;
Monkey::Monkey(){
    moveName = "Monkey";
}


int Monkey::compareMove(Move* opponentMove){
    if(opponentMove->getName() == "Ninja"||opponentMove->getName() == "Robot"){
        return 1;
    }
    else if(opponentMove->getName() == "Monkey"){
        return 2;
    }
    else{ 
        return 0;
    }
}
