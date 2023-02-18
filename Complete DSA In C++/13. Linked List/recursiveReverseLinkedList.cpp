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

void insertAtHead(Node* &head , int data){
    if(head == NULL){
        Node* temp = new Node(data);
        head = temp;
    }else{
        Node* temp = new Node(data);
        temp->next = head;
        head = temp;
    }
}

void reverse(Node* &head , Node* curr , Node* prev){
    if(curr == NULL){
        head = prev;
        return ;
    }

    Node* forword = curr->next;
    reverse(head,forword,curr);
    curr->next = prev;
}

void reverseLinkedList(Node* &head ){
   Node* curr = head;
   Node* prev = NULL;
   reverse(head,curr,prev);
   return;

}

void print(Node* head ){
   while (head){
        cout << head->data << " ";
        head = head->next;
   }
   cout << "\n";
}

int main ()
{
    Node* head = NULL;
    insertAtHead(head, 10);
    insertAtHead(head,20);
    insertAtHead(head,30);
    insertAtHead(head,40);
    insertAtHead(head, 50);
    print(head);
    reverseLinkedList(head);
    print(head);
    return 0;
}