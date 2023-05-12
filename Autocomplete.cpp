#include "Autocomplete.h"
#include "TrieNode.h"

#include <string>
#include <vector>
#include <iostream>
using namespace std;
Autocomplete::Autocomplete(){
    root = new TrieNode(26);
}


void Autocomplete::insert(string word){
    TrieNode* current = root;
        int length = word.size();
        for(int i =0;i<length;i++){
            int index = word[i]-'a'; // finds ascii index
            if(current->children[index]==nullptr){ //if there is a nullptr insert node
                TrieNode* newNode = new TrieNode(26); //initilise new node
                current->children[index] = newNode; // the current node points to the new node
                
            }
            current = current->children[index]; //travers down the tree
        }

    current->isEndOfWord = true; //finish
}   


vector<string> Autocomplete::getSuggestions(string partialword){
        vector<string> newStringVector;
        int length = partialword.size();
        TrieNode* current = root;
        for(int i =0; i<length;i++){
            int index = partialword[i]-'a';
            if(current->children[index]!=nullptr){
                
                current = current->children[index];
            }
            else{
                return newStringVector;
            }
        }
       getword(current,partialword,&newStringVector);
        return newStringVector;
    
}

void Autocomplete::getword(TrieNode* current,string partialword,vector<string>*newStringVector){   
    if(current->isEndOfWord==true)
    {
        newStringVector->push_back(partialword);
    }
    for(int j = 0;j<26;j++)
    {
        if(current->children[j] != nullptr)
        {
            char letter = j +'a';
            string temp = partialword + letter;
            getword(current->children[j],temp,newStringVector);
        }
    }
}