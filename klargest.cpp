#include <queue>
#include <iostream>
#include <vector>

int kth_largest(std::vector<int> values, int k){
    int length = sizeof(values);

    std::priority_queue<int> myqueue;
    for(int i =0;i<length;i++){
        myqueue.push(values[i]); 
    }
    return values[k-1];
};