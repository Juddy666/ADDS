#include<string>
#include<iostream>
#include "function-4-1.h"

using namespace std;

int main(){
  BusCounter *r = new BusCounter(3); // set up a bus with capacity of 3 people
  // add some people
  for(int i=0;i<4;i++){
    cout << "num people: " << r->get_count() << endl;
    r->passenger_board();
  }
  // exit some people 
  for(int i=0;i<4;i++){
    cout << "num people: " << r->get_count() << endl;
    r->passenger_exit();
  }
}