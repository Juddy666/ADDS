#include <queue>
#include <vector>
#include <iostream>
int kth_largest(std::vector<int> values, int k){
    int length = values.size();
    std::priority_queue<int> myqueue;
    for(int i =0;i<length;i++){
        myqueue.push(values[i]); 
    }

    for(int j =0;j<k-1;j++){
        myqueue.pop();
    }
    return myqueue.top();
};

// int main(){
//     std::vector<int> myvector{ 10, 20, 30 };

//     int ans;
//     ans = kth_largest(myvector,1);
//     std::cout << ans << std::endl;
//     return 0;
// }