#include <iostream>
#include <string>
#include "Human.h"
#include "Move.h"
#include "movehelper.h"
using namespace std;

Human::Human(){
    name = "Human";
}

Human::Human(string new_name){
    name =  new_name;
}
Move* Human::makeMove(){
    string playerMoveName;
    movehelper helper;
        // cout << "Enter move" << endl;
        cin >> playerMoveName;
        Move* playerMove = helper.movedetect(playerMoveName);
        return playerMove;
};