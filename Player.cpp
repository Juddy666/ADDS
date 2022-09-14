#include <iostream>
#include <string>
#include "Player.h"

using namespace std;


Player::Player(){
    allmoves = "";
}


char Player::getMove(){
    return allmoves[allmoves.size() - 1];
}


bool Player::win(Player *Oppenent){
    char current_move = getMove();
    
    
    if (Oppenent->getMove() == current_move){
        return false;
    }
    else if(Oppenent->getMove() == 's' && current_move == 'r'){
        return true;
    }

    else if(Oppenent->getMove() == 'r' && current_move == 'p'){
        return true;
    }

    else if(Oppenent->getMove() == 'p' && current_move == 's'){
        return true;
    }

    else if(Oppenent->getMove() == 's' && current_move == 'p'){
        return false;
    }

    else if(Oppenent->getMove() == 'r' && current_move == 's'){
        return false;
    }

    // else if(Oppenent->getMove() == 'p' && current_move == 'r'){4
    else {
        return false;
    }


}