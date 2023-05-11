#include "TrieNode.h"
TrieNode::TrieNode(int size){
    isEndOfWord = false;
    children.resize(size,nullptr);
}
