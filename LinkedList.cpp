#include "LinkedList.h"
#include "Node.h"
#include <Limits>
#include <iostream>
using namespace std;

LinkedList::LinkedList(){
    head = nullptr;
    count = 0;
};

LinkedList::LinkedList(int* array, int len){
    for(int i =0;i<len;i++){    
        insertFromFront(i);
    }
};

void LinkedList::deleteFromFront() {
if (head == nullptr) {
return;
}
Node* temp = head;
head->setLink(head);
delete temp;
};

LinkedList::~LinkedList() {
while(head != nullptr) {
deleteFromFront();
count--;
}
};

void LinkedList::insertFromFront(int newValue){
    
    Node* newNode;
    newNode->setData(newValue);
    if(count>1){
        newNode->setLink(head);
    }
    head = newNode;
    count ++;
}
Node* LinkedList::traverse(int index){
        int position = 0;
        Node* currNode = head;
        while(currNode != nullptr && position<index){
            currNode = currNode->getLink();
            position ++;
        }
        return currNode;
        }

void LinkedList::insertPosition(int pos, int newNum){
    if(pos == 0){
        insertFromFront(newNum);
    }
    Node* prevNode = traverse(pos);  
    Node* newNode;
    newNode->setData(newNum);
    newNode->setLink(prevNode);
    count++;
}

bool LinkedList::deletePosition(int pos){
    if(pos > count){
        return false;
    }
    
    if(pos == 0){
        deleteFromFront();
        return true;
    }

    Node* target = traverse(pos);
    Node* prevNode = traverse(pos-1);
    prevNode->setLink(target->getLink());
    delete target;
    count --;

    return true;
}


int LinkedList::get(int pos){
    if(pos>count){
        return std::numeric_limits < int >::max();
    }
    Node* currNode = traverse(pos);
    return currNode->getData();   
}

int LinkedList::search(int target){
    Node* currentNode = head;
    int position =0;
    while(currentNode->getData() != target){
        currentNode = currentNode->getLink();
    }
    if(currentNode->getData() != target){
        return -1;
    }
    return currentNode->getData();
}

void LinkedList::printList(){
    if(count == 0){
        return;}
    Node* currentNode = head;
    cout << "[";
    for(int i = 0;i<count;i++){
        cout << currentNode->getData();
        currentNode = currentNode->getLink();
    }
    cout << "]" << endl;
}