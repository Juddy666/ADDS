#ifndef NODE_H
#define NODE_H

class Node {
    private:
        int data;
        Node* link;
    public:
        Node(int data, Node* link);
        int getData();
        Node* getLink();
        void setData(int newData);
        void setLink(Node* newLink);

};

#endif //NODE_H