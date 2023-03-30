#include "Finder.h"
#include <iostream>
#include <string>
#include <vector>
#include <chrono>

using namespace std;

int main(){
    Finder MyFinder;
    string big = "1345126789";
    string small = "12398";
    vector<int> ans;
    ans = MyFinder.findSubstrings(big,small);
    for(int i=0; i <5;i++){
        cout << ans.at(i) << " " << endl;
    }
    return 0;

}
