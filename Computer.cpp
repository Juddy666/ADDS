#include <iostream>
#include <string>
#include "Computer.h"
#include "Monkey.h"
#include "Paper.h"
using namespace std;

Computer::Computer(){
    name = "Computer";
}

Move* Computer::makeMove(){
    
    Move* computerMove = new Paper;
    
    return computerMove;
}