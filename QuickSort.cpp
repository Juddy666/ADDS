#include "QuickSort.h"
#include <vector>
#include <iostream>
using namespace std;
std::vector<int>  QuickSort::sort(std::vector<int> list){
    
    if (list.empty()) {
    return list;
    }
    
    
    if(list.size() == 1){
        return list;
    }
    
    if(list.size()==2){
        if(list[0]<list[1]){
            return list;
        }
        else {
            int temp = list[0];
            list[0] = list[1];
            list[1] = temp;
            return list;
        }
    }
    
    int pivot = list[2];
    

    std::vector<int> lesser;
    std::vector<int> greater;
    
    
    for(int i =0;i<list.size();i++){
        if (list[i] < pivot&&i!=2){
            lesser.push_back(list[i]);
        }
        else if((list[i]>=pivot)&&i!=2){
            greater.push_back(list[i]);
        }
    }
    // cout << "Lesser: " <<endl;
    // for(int i=0; i < lesser.size();i++){
    //     std::cout << lesser[i] << " ";
    // }
    // std::cout<<endl;


    // cout << "Greater: " <<endl;
    // for(int i=0; i < greater.size();i++){
    //     std::cout << greater[i] << " ";
    // }
    std::cout<<endl;
    lesser = sort(lesser);
    greater = sort(greater);
    lesser.push_back(list[2]);
    lesser.insert(lesser.end(),greater.begin(),greater.end());

    return lesser;


}






