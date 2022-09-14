#include <iostream>
#include <string>
#include "Player.h"
#include "Person.h"

using namespace std;

void Person::move(){
    char moveChoice;
    
    cout << "Enter move: ";
    cin >>  moveChoice;
    moveCount++;
    allmoves[moveCount] = moveChoice;
}