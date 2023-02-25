#include <iostream>
#include<unordered_map>
using namespace std;

class Node
{

public:
    int data;
    Node *next;
    Node* random;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void insertAtHead(Node *&head, int data)
{
    if (head == NULL)
    {
        Node *temp = new Node(data);
        head = temp;
    }
    else
    {
        Node *temp = new Node(data);
        temp->next = head;
        head = temp;
    }
}

void insertAtTail(Node* &head,Node* &tail , int data ){
    if(tail == NULL){
        Node* temp = new Node(data);
        tail = temp;
        head = tail;
    }else{
        Node* temp = new Node(data);
        tail->next = temp;
        tail = temp;
    }
}

Node* cloneLinkedList(Node* head){

    // creating the clone of the linked list using the 
     Node* cloneHead = NULL;
     Node* cloneTail = NULL;
     Node* temp = head;
     while(temp){
        insertAtTail(cloneHead, cloneTail ,temp->data);
        temp = temp->next;
     }

     // map them into the unordered map
     unordered_map<Node* , Node*> oldToNew;

     Node* originalNode = head;
     Node* cloneNode = cloneHead;

     while(originalNode != NULL && cloneNode != NULL){
        oldToNew[originalNode] = cloneNode;
        originalNode = originalNode->next;
        cloneNode = cloneNode->next;
     }

     //
     originalNode = head;
     cloneNode = cloneHead;
     while(originalNode){
        cloneNode->random = oldToNew[originalNode->random];
        originalNode = originalNode->next;
        cloneNode = cloneNode->next;
     }

     return cloneHead;
}



void print(Node *head)
{
    while (head)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << "\n";
}

int main()
{
    Node *head = NULL;
    insertAtHead(head, 10);
    insertAtHead(head, 20);
    insertAtHead(head, 30);
    insertAtHead(head, 40);
    insertAtHead(head, 50);
    print(head);
    
    Node* clone = cloneLinkedList(head);
    print(clone);

    return 0;
}