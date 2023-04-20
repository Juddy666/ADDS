
#include <vector>
#include <iostream>
#include <sstream>
#include "QuickSort.h"
#include "RecursiveBinarySearch.h"
using namespace std;
int main(void){
    QuickSort mySort;
    RecursiveBinarySearch myBinarySearch;

    std::string input;
    std::getline(std::cin, input);
  
    std::vector<int> myVector;
    std::istringstream iss(input);
  
    int num;
    while (iss  >> num) {
    myVector.push_back(num);
    }






    
    std::vector<int>  myAns = mySort.sort(myVector);
    bool is1;
    is1 = myBinarySearch.search(myAns,1);
    
    if(is1 == 1){
        cout << "true" << " ";
    }    

    else{
        cout << "false" << " ";
    }

    for(int i=0; i < myAns.size();i++){
        std::cout << myAns[i] << " ";
    }
    std::cout<<endl;
    
    
    
    return 0;
};