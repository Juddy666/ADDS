#include <vector>
#ifndef TRIENODE
#define TRIENODE


class TrieNode{
    public:
        int routerNumber;
        TrieNode(int size);  
        bool isEndOfWord;
        std::vector<TrieNode*> children;
};

#endif
