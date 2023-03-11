#include "Monkey.h"
#include "Move.h"
#include <string>
using namespace std;
Monkey::Monkey(){
    moveName = "Monkey";
}


bool Monkey::compareMove(Move* opponentMove){
    if(opponentMove->getName() == "Ninja"||opponentMove->getName() == "Robot"){
        return 1;
    }
    else{ 
        return 0;
    }
}
