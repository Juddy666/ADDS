#include <iostream>
#include <string>
#include "Player.h"
#include "Computer.h"
#include "Person.h"

int main(int arg,char **argv){
    Player *me = new Person();
    Player *comp = new Computer('s');

    me->move();
    comp->move();
    if(me->win(comp)==false)
        cout << "Lose" << endl;
    else{
        cout << "Win" <<endl;
    }
}