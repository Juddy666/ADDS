
#include <vector>
#include <iostream>
#include "QuickSort.h"
#include "RecursiveBinarySearch.h"
using namespace std;
int main(void){
    QuickSort mySort;
    RecursiveBinarySearch myBinarySearch;
    std::vector<int>  myVector{7,4,2,10,3,1};
    std::vector<int>  myAns = mySort.sort(myVector);

    for(int i=0; i < myAns.size();i++){
        std::cout << myAns[i] << " ";
    }
    std::cout<<endl;
    bool is1;
    is1 = myBinarySearch.search(myAns,1);
    cout << is1 << endl;
    
    return 0;
};
