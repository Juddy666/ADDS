#include <iostream>
#include <string>
#include "Computer.h"
#include "Zombie.h"
#include "Robot.h"
#include "Pirate.h"
#include "Ninja.h"
#include "Monkey.h"
#include "Paper.h"
#include "Scissors.h"
#include "Rock.h"

using namespace std;

Computer::Computer(){
    name = "Computer";
}

Move* Computer::makeMove(){
    
    Move* computerMove = new Rock;
    
    return computerMove;
}