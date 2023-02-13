#include<iostream>
using namespace std;

class Node{

    public:
    int data;
    Node* next;

    Node(int head){
      this->data = head;
      this->next = NULL;
    }
};

void printList(Node* head){
    
}

int main ()
{
    Node* head = new Node(10);
    
    return 0;
}