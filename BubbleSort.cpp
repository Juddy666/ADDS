#include "BubbleSort.h"

#include <vector>

std::vector<int> BubbleSort::sort(std::vector<int> list){
    for (int i = vector.size() -1; i>1;i--){
        for(int j = 0;j<i;j++){
            if(vector.at(j)>vector.at(j+1)){
                int temp = vector.at(j);
                vector.at(j) = vector.at(j+1);
                vector.at(j+1) = temp;
            }
        }
    }
}