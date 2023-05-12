#include <iostream>
#include "Autocomplete.h"
#include "TrieNode.h"
#include "PrefixMatcher.h"
using namespace std;
int main(void){
    Autocomplete myAC;
    myAC.insert("car");
    myAC.insert("cat");
    myAC.insert("caring");
    myAC.insert("dog");
    vector<string> ans = myAC.getSuggestions("car");
    for(int i =0;i<ans.size();i++){
        cout << ans[i] << " ";
    }
    cout<<endl;
    



    PrefixMatcher pm;
    pm.insert("110011011101", 1);
    pm.insert("110011011", 2);
    pm.insert("11001101", 3);

    string networkAddress = "11001101110";
    int routerNumber = pm.selectRouter(networkAddress);
    cout << "Router number for network address " << networkAddress << " is " << routerNumber << endl;
    return 0;
}