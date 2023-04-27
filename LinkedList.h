#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include "Node.h"
class LinkedList {
    private: 
        Node* head;
        int count;
    public:
        LinkedList();
        LinkedList(int* array, int len);
        ~LinkedList();
        void insertFromFront(int newValue);
        void deleteFromFront();
        void insertPosition(int pos, int newNum);
        Node* traverse(int index);
        bool deletePosition(int pos);
        int get(int pos);
        int search(int target);
        void printList();

};