#include<iostream>
using namespace std;

class Node{
    
    public:
    int data;
    Node* prev = NULL;
    Node* next = NULL;
    
    Node(int data){
       this->data = data;
       this->prev = NULL;
       this->next = NULL;
    }
    ~Node(){
        int data = this->data;
        if(this->next != NULL){
            delete next;
            next = NULL;
        }
        cout << "Memory is realisied " << data << "\n";
    }
};

//for insert element at the front of the list 
void insertAtFront(Node* &head , Node* &tail, int data){
    if(head == NULL){
        // when head is null
        Node* temp = new Node(data);
        head = temp;
        tail = temp;
    }else{
        // when list is not empty
        Node* temp = new Node(data);
        temp->next = head;
        head->prev = temp;
        head = temp;
    }
}

// for inserting the element at the end of the list
void insertAtTail(Node* &head , Node* &tail , int data){
    if(tail == NULL){
        // when tail is null
        Node* temp = new Node(data);
        tail = temp;
        head = temp;
    }else{
        // when list is not empty 
        Node* temp = new Node(data);
        tail->next = temp;
        temp->prev = tail;
        tail = temp;
    }
}

// insert at any position in list
void insertAtGivenPos(Node* &head , Node* &tail , int pos , int data){
    if(pos == 1){
        insertAtFront(head,tail,data);
        return;
    }else{
        // for non- empty list
        Node* curr = head;
        int count =1;
        while(count < pos-1){
            curr = curr->next;
            count++;
        }

        // if curr of next is null
        if(curr->next == NULL){
            insertAtTail(head,tail,data);
            return;
        }

        Node* temp = new Node(data);
        temp->next = curr->next;
        curr->next->prev = temp;
        curr->next = temp;
        temp->prev = curr;
    }
}

void deleteNodeAtGivenPos(Node *&head, Node *&tail, int pos)
{
    if (pos == 1)
    {
        Node* temp = head;
        temp->next->prev = NULL;
        head = temp->next;
        temp->next = NULL;
        delete temp;
    }else{
       Node* curr = head;
       Node* prev = NULL;

       int count = 1;
       while(count<pos){
          prev = curr;
          curr = curr->next;
          count++;
       }

       if(curr->next == NULL){
          prev->next = NULL;
          curr->prev = NULL;
          tail = prev;
          delete curr;
          return;
       }
       prev->next = curr->next;
       curr->next->prev = prev;
       curr->next = NULL;
       curr->prev = NULL;
       delete curr;
    }
}

// for displaying the list item
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
    Node* tail = NULL;

    insertAtFront(head,tail,5);
    print(head);

    insertAtFront(head,tail,3);
    print(head);

    insertAtFront(head,tail,2);
    print(head);

    insertAtTail(head,tail,6);
    print(head);

    insertAtTail(head, tail, 7);
    print(head);

    insertAtFront(head,tail,1);
    print(head);

    insertAtGivenPos(head,tail,4,4);
    print(head);

    insertAtGivenPos(head,tail,1,-10);
    print(head);

    insertAtGivenPos(head,tail,9,8);
    print(head);

    insertAtGivenPos(head, tail, 10, 9);
    print(head);

    deleteNodeAtGivenPos(head,tail,1);
    print(head);

    deleteNodeAtGivenPos(head,tail,4);
    print(head);

    deleteNodeAtGivenPos(head, tail,6);
    print(head);

    deleteNodeAtGivenPos(head, tail,7);
    print(head);


    deleteNodeAtGivenPos(head,tail,6);
    print(head);
    cout << "Head is " << head->data << "\n";
    cout << "Tail is " << tail->data << "\n";
    return 0;
}