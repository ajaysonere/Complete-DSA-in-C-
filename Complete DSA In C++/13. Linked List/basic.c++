#include<iostream>
using namespace std;

class Node{

    public:
    int data;
    Node* next;

    Node(){
        this->data = 0;
        this->next = NULL;
    }
    Node(int head){
        this->data = head;
        this->next = NULL;
    }
};

void insertAtHead(Node* &head, int d){
    // Create a new node  
       Node* temp = new Node(d);
       temp->next = head;
       head = temp;
}

void printList(Node*head){
       while (head != NULL) {
         cout << head->data << " ";
         head = head->next;
       }
       cout << "\n";
}
int main ()
{
    // cout << "Linked List";
    Node* head = new Node();

    // printList(head);
    // insertAtHead(head ,20);
    // printList(head);
    // insertAtHead(head,30);
    // printList(head);

    cout << head->data << "\n";
    cout << head->next << "\n";
    return 0;
}