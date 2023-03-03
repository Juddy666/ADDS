#include <iostream>
#include <string>
#include "Player.h"

using namespace std;

Player::Player(){
    name = "Human";
}

Player::Player(string new_name){
    name = new_name;
}

// virtual char Player::makeMove() = 0;

string Player::getName(){
    return name;
}

