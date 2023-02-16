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

    ~Node(){
        int data = this->data;
        if(this->next != NULL){
            delete next;
            next = NULL;
        }
        cout << "Memory is realized for " << data << "\n";
    }
};

// function for insert an element at the front of the list
void insertAtFront(Node* &head,Node* &tail,int data){
     // when list is empty
     if(head == NULL){
        Node* temp = new Node(data);
        head = temp;
        tail = temp;
     }else{
        Node* temp = new Node(data);
        temp->next = head;
        head = temp;
     }
}

// for insert an element at the last or tail of the list 
void insertAtTail(Node* &head ,Node* &tail , int data){
    // when tail is Pointing to NULL 
     if (tail == NULL)
     {
        Node *temp = new Node(data);
        tail = temp;
        head = temp;
     }
     else
     {
        Node *temp = new Node(data);
        tail->next = temp;
        tail = temp;
     }
}

// for inserting an element at the given postion 
void insertAtGivenPos(Node* &head, Node* & tail, int pos , int data){

    // when position is 1
    if(pos == 1){
        insertAtFront(head,tail,data);
        return;
    }

    Node* curr  = head;
    int count = 1;
    while(count < pos-1){
        curr = curr->next;
        count++;
    }

    if(curr->next == NULL){
        insertAtTail(head,tail,data);
        return;
    }

    Node* temp = new Node(data);
    temp->next = curr->next;
    curr->next = temp;

}

// for deleting the element of the list 
void deleteAtTheGivenPos(Node* &head , Node* &tail, int pos){
     if(pos == 1){
        // when we want to delete at the front the list 
        Node* temp = head;
        head = temp->next;
        temp->next = NULL;
        delete temp;
     }else{ 
         Node* curr = head;
         Node* prev = NULL;
         int count = 1;
         while(count < pos){
            prev = curr;
            curr = curr->next;
            count++;
         }
          
          // for the last node
          if(curr->next == NULL){
            tail = prev;
          }
         prev->next = curr->next;
         curr->next = NULL;
         delete curr;
     }
}

// for displaying the list
void print(Node* head){
    while(head != NULL){
        cout << head->data << " ";
        head = head->next;
    }
    cout << "\n";
}

int main ()
{
    Node* head = NULL;
    Node* tail = NULL;

    insertAtFront(head,tail,3);
    print(head);

    insertAtFront(head, tail, 5);
    print(head);

    insertAtTail(head,tail,2);
    print(head);

    insertAtTail(head, tail, 1);
    print(head);

    insertAtFront(head,tail,6);
    print(head);

    insertAtGivenPos(head,tail,3,4);
    print(head);

    insertAtGivenPos(head,tail,1,7);
    print(head);

    insertAtGivenPos(head,tail,8,-1);
    print(head);

    deleteAtTheGivenPos(head,tail,1);
    print(head);

    deleteAtTheGivenPos(head,tail,4);
    print(head);

    deleteAtTheGivenPos(head,tail,6);
    print(head);

    cout << "Head at " << head->data << "\n";
    cout << "Tail at " << tail->data << "\n";
    return 0;
}