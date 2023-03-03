#include <iostream>
#include <string>
#include "Referee.h"
using namespace std;

Player* Referee::refGame(Player* player1, Player* player2){
    Player* Null = nullptr;
    char playerMove = player1->makeMove();
    char computerMove = player2->makeMove();
        if(playerMove == computerMove){
            return Null;
        }
        else if((playerMove == 'R' && computerMove == 'S') || (playerMove == 'S' && computerMove == 'P')|| (playerMove == 'P' && computerMove == 'R')){
            return player1;
        }
        else{
            return player2;
        }
}