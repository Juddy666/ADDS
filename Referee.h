#include <iostream>
#include <string>
#include "Player.h"
#ifndef REFEREE_H
#define REFEREE_H
using namespace std;

class Referee{
    public:
        Player* refGame(Player* player1, Player*player2);
};


#endif //REFEREE_H