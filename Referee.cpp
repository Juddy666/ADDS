#include <iostream>
#include <string>
#include "Referee.h"
using namespace std;

Player* Referee::refGame(Player* player1, Player* player2){
    //Player* Null = nullptr;
    Move* player1Move = player1->makeMove();
    Move* player2Move = player2->makeMove();

    bool ans = player1Move->compareMove(player2Move);        
        if(ans==1){
            return player1;
        }
        else{
            return player2;
        }
        
        
        
        
        
        
        // if(playerMove == computerMove){
        //     return Null;
        // }
        // else if((playerMove == 'R' && computerMove == 'S') || (playerMove == 'S' && computerMove == 'P')|| (playerMove == 'P' && computerMove == 'R')){
        //     return player1;
        // }
        // else{
        //     return player2;
        // }
}