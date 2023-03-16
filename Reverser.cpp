#include "Reverser.h"
#include <string>
#include <iostream>
using namespace std;

int Reverser::reverseDigit(int value){
    if(value <0){
        return -1;
    }
    if (value <10){
        return value;
    }
    int curvalue = value%10;
    int remainder = value/10;
    string s = to_string(curvalue);

    s = s + to_string(reverseDigit(remainder));
    return stoi(s); 
};

string Reverser::reverseString(string characters){
    if(characters.length()==0){
        return "ERROR";
    }
    
    if (characters.length() <=1){
        return characters;
    }
    
    char curChar = characters.back();
    
    characters.pop_back();
    // cout << characters << endl;
    string s; 
    

    s = curChar + reverseString(characters) ;
    return s;
};

