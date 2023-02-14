#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* prev = NULL;
    Node* next = NULL;

    Node(int value){
        this->data = value;
        this->prev = NULL;
        this->next = NULL;
    }
};

void insertAtFront(Node* &head ,  int value){

    // create new node 
    Node* temp = new Node(value);
    temp->next = head;
    head->prev = temp;
    head = temp;
}

void insertAtTail(Node* &tail ,int value){
    
    // create a new node 
    Node* temp = new Node(value);
    tail->next = temp;
    temp->prev  = tail;
    tail = temp;
}

void insertAtPosition(Node* &head , int pos , int value){
    if(pos == 1){
        insertAtFront(head,value);
        return;
    }
    Node* temp = head;
    int count = 1;
    while(count < pos){
        temp = temp->next;
        
    }
}

// print the element of the list 
void printList(Node* head){
    Node* temp = head;
    while(temp != NULL){
       cout << temp->data << " ";
       temp = temp->next;
    }
    cout << "\n";
}

// get the lenght of the linked list 
int getLengthOfList(Node* head ){
    int count =0;
    while(head != NULL){
        head = head->next;
        count++;
    }
    return count;
}

int main ()
{
    // Doubly linked List 
    Node* head;
    Node* tail;
    Node* first = new Node(100);
    head = first;
    tail = first;
    printList(head);
    insertAtFront(head,200);
    printList(head);
    insertAtFront(head,300);
    printList(head);
    insertAtTail(tail,50);
    printList(head);
    
    
    // cout << "Lenght is " << getLengthOfList(head) << "\n";
    cout << "Head is " << head ->data << "\n";
    cout << "Tail is " << tail ->data << "\n";
    return 0;
}