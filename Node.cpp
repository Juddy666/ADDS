#include "Node.h"

    Node::Node(int data, Node* link) {
        
        this->data = data;
        this->link = link;
    };


    int Node::getData(){
        return data;
    };

    Node* Node::getLink(){
        return link;
    }


    void Node::setData(int newData){
        newData = data;
    }

    void Node::setLink(Node* newLink){
        newLink = link;
    }