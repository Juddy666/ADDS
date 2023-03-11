#include <iostream>
#include <string>
#include "Computer.h"
#include "Player.h"
#include "Human.h"
#include "Referee.h"
#include "movehelper.h"

using namespace std;


int main(int arg, char **argv){
    string humanName;
    cout << "Enter name: " << endl;
    cin >> humanName;
    
    Human *Jeff =  new Human(humanName);
    Computer *Comp = new Computer();
    Referee Ref = Referee();
    
    // Move* player2Move = Comp->makeMove();
    // cout << player2Move->getName() <<endl;
    // Move* player1Move = Jeff->makeMove();
    // cout << player1Move->getName() << endl;
    
    
    Player *Winner = Ref.refGame(Jeff,Comp);
    

    cout << "Winner: " << Winner->getName() << endl;
return 0;
    
}