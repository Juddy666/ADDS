#include "QuickSort.h"
#include <vector>

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
        if (list[i] < pivot){
            lesser.push_back(list[i]);
        }
        else{
            greater.push_back(list[i]);
        }
    }

    lesser = sort(lesser);
    greater = sort(greater);

    lesser.insert(lesser.end(),greater.begin(),greater.end());

    return lesser;


}
