#include "TrieNode.h"
#include "PrefixMatcher.h"

#include <iostream>
#include <vector>
#include <string>

using namespace std;

PrefixMatcher::PrefixMatcher(){
    root = new TrieNode(2);
}

void PrefixMatcher::insert(string address, int routerNumber){
    TrieNode* current = root;
    int length = address.size();
    for(int i =0;i<length;i++){
        
        int index = address[i]-'0';
        if( current->children[index]==nullptr){
        current->children[index] = new TrieNode(2);
    }
        current = current->children[index];
    }
    current->isEndOfWord = true;
    current->routerNumber = routerNumber;      
}

 int PrefixMatcher::selectRouter(string networkAddress){
    TrieNode* current = root;
    TrieNode* latestValidNode = nullptr;
    
    int length = networkAddress.size();
    for(int i =0;i<length;i++){
        int index = networkAddress[i]-'0';
        if (current->children[index] == nullptr) {
            break; 
            }
        current = current->children[index];
        if (current->isEndOfWord) {
                latestValidNode = current; 
            }
        } 
        if (latestValidNode == nullptr) {
            return -1; 
        }
        return latestValidNode->routerNumber;
 }
