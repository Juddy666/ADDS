#include <iostream>
#include "Autocomplete.h"
#include "TrieNode.h"
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
    return 0;
}