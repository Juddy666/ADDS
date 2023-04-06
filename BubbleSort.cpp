
#include "BubbleSort.h"

#include <vector>

std::vector<int> BubbleSort::sort(std::vector<int> list){
    for (int i = 0; i<= list.size()-1;i++){
        for(int j = i+1;j<=list.size()-1;j++){
            if(list.at(i)>list.at(j)){
                int temp = list.at(i);
                list.at(i) = list.at(j);
                list.at(j) = temp;
            }
        }
    }
    return list;
}