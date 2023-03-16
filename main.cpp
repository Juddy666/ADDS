#include "Truckloads.h"
#include "Reverser.h"
#include <iostream>
using namespace std;

int main(){

Truckloads myTruckload;
int ans = myTruckload.numTrucks(1024,5);
cout << ans << endl;

Reverser myReverser;
int answer = myReverser.reverseDigit(12345);
cout << answer << endl;

string stringAnswer = myReverser.reverseString("abcde");
cout << stringAnswer << endl;
return 0;
}