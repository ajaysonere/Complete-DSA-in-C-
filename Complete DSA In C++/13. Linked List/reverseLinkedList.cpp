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

void insertAtHead(Node* &head, int data){
    if(head == NULL){
        Node* temp = new Node(data);
        head = temp;
    }else{
       Node* temp = new Node(data);
       temp->next = head;
       head = temp;
    }
}

// reverse the linked list
void reverseLinkedList(Node* &head){
    Node* curr = head;
    Node* prev = NULL;
    // Node* temp;
    while(curr != NULL){
         Node* temp = curr->next;
        curr->next = prev;
        prev = curr;
        curr = temp;
    }
    head = prev;
}

void print(Node* head){
    while(head){
        cout << head->data << " ";
        head = head->next;
    }
    cout << "\n";
}


int main ()
{
    Node* head = NULL;

    insertAtHead(head,10);
    // print(head);

    insertAtHead(head,20);
    // print(head);

    insertAtHead(head,30);
    // print(head);

    insertAtHead(head,40);
    // print(head);

    insertAtHead(head,50);

    insertAtHead(head,60);
    print(head);

    reverseLinkedList(head);

    print(head);
    return 0;
}