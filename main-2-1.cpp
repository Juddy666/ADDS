#include <stdlib.h>
#include <iostream>

using namespace std;
extern int fishing_fine_lookup(int over);

int main(int arg, char **argv){

    
  int over=0;
  cout << "my fishing fine is: " << fishing_fine_lookup(over) << endl;
  over=10;
  cout << "my fishing fine is: " << fishing_fine_lookup(over) << endl;
  over=21;
  cout << "my fishing fine is: " << fishing_fine_lookup(over) << endl;
  over=50;
  cout << "my fishing fine is: " << fishing_fine_lookup(over) << endl;
  return 0;
}