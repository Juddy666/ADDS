#include <vector>
#ifndef TRIENODE
#define TRIENODE


class TrieNode{
    public:
        TrieNode(int size);  
        bool isEndOfWord;
        std::vector<TrieNode*> children;
};

#endif
