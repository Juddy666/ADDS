#include <iostream>
#include <string>
#include <Human.h>

using namespace std;

char Human::makeMove(){
    char playerMove;
        cout << "Enter mover" << endl;
        cin >> playerMove >> endl;
    return playerMove;
};