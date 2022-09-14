#include <iostream>
#include <string>
#include "Player.h"
#include "Computer.h"

using namespace std;

Computer::Computer(char letter){
    for(int i =0;i<10;i++){
        allmoves[i] = letter;
    }

}

void Computer::move(){
    moveCount++;
} 