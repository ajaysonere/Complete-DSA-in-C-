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

// insert Element at the front of the node 
void insertAtHead(Node* &head , int value){
    Node* temp = new Node(value);
    temp ->next = head;
    head = temp;
}

// insert Element at the end of the node 
void insertAtEnd(Node* &tail , int value){
    Node* temp = new Node(value);
    tail->next = temp;
    tail = temp;

}

//  insert Element at the position

void insertAtPosition(Node* &tail ,Node* &head, int pos, int value){

    if(pos == 1){
        insertAtHead(head,value);
        return;
    }

    Node* temp  = head;
    int count = 1;
    while(count < pos-1){
        temp = temp->next;
        count++;
    }
    if(temp->next == NULL){
        insertAtEnd(tail,value);
        return ;
    }
    // create new node
    Node* insert = new Node(value);
    insert->next = temp->next;
    temp->next = insert;
}


// print the list element
void printList(Node* head){
      while(head != NULL){
        cout << head->data << " ";
        head = head->next;
      }
      cout << "\n";
}

int main ()
{
    Node* head = new Node(10);
    Node* tail = head;
    printList(head);
    insertAtHead(head,20);
    printList(head);
    insertAtHead(head ,30);
    printList(head);
    // int data;
    // cin >> data;
    // insertAtHead(head,data);
    // printList(head);
    insertAtEnd(tail,2);
    printList(head);
    insertAtEnd(tail,5);
    printList(head);
    insertAtHead(head,40);
    printList(head);
    insertAtEnd(tail,7);
    printList(head);

    insertAtPosition(tail,head,8,25);
    printList(head);


    cout << "Head " << head->data << "\n";
    cout << "Tail " << tail->data << "\n";

    return 0;
}