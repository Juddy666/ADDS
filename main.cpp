#include <iostream>
#include <string>
#include "Computer.h"
#include "Player.h"
#include "Human.h"
#include "Referee.h"

using namespace std;


int main(int arg, char **argv){
    string humanName;
    cout << "Enter name: " << endl;
    cin >> humanName;
    Human *Jeff =  new Human(humanName);
    Computer *Comp = new Computer();
    Referee Ref = Referee();
    Player *Winner = Ref.refGame(Jeff,Comp);

    cout << "Winner: " << Winner->getName() << endl;
return 0;
    
}