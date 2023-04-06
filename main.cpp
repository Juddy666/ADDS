#include "BubbleSort.h"
#include <vector>
#include <iostream>

using namespace std;
int main(void){
    BubbleSort mySort;
    
    std::vector<int>  myVector{7,4,2,10,3,1};
    std::vector<int>  myAns = mySort.sort(myVector);

    for(int i=0; i < myAns.size();i++){
        std::cout << myAns[i] << " ";
    }
    std::cout<<endl;
    
    return 0;
};