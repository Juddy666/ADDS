#ifndef AUTOCOMPLETE
#define AUTOCOMPLETE
#include "TrieNode.h"
#include <string>
#include <vector>
using namespace std;
class Autocomplete{
    private:
        TrieNode* root;
        
    public:
        Autocomplete();
        void insert(string word);
        vector<string> getSuggestions(string partialword);
        void getword(TrieNode* current,string partialword,vector<string>*newStringVector);
};
#endif