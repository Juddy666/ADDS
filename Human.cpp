#include <iostream>
#include <string>
#include "Human.h"

using namespace std;

Human::Human(){
    name = "Human";
}

Human::Human(string new_name){
    name =  new_name;
}
char Human::makeMove(){
    char playerMove;
        cout << "Enter move" << endl;
        cin >> playerMove;
    return playerMove;
};