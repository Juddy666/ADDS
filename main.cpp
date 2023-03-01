#include <iostream>
#include <string>
#include <Computer.h>
#include <Player.h>
#include <Human.h>
#include <Referee.h>

using namespace std;


int main(){
    string humanName;
    cout << "Enter name: " << endl;
    cin >> humanName << endl;
    Player *Jeff =  new Player(humanName);
    Computer *Comp = new Computer("Compo");
    Referee Ref = Referee("Refo");
    Player *Winner = Ref.refGame(Jeff,Comp);

    cout << "Winner: " << Winner->getName() << endl;
    
    
}