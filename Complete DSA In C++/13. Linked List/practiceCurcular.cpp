#include<iostream>
using namespace std;

class Node{

    public:
    int data;
    Node* next;

    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};

void insertAtFront(Node* &tail , int data){
    if(tail == NULL){
        Node* temp = new Node(data);
        tail = temp;
        temp->next = temp;
    }else{
        
    }
}

int main ()
{ 
    Node* tail;

    return 0;
}