#include<iostream>
using namespace std;


class Node{
    public:
    int data;
    Node *next;


    // constructor
    Node(int data){
        this->data = data;
        this->next = NULL;
    }

    //destructor
    ~Node(){
       if(this->next != NULL){
          delete next;
          this->next = NULL;
       }
    }
};


// insert element at the front 
void insertAtFront(Node* &head , int value){
       
    // create new node 
    Node* temp = new Node(value);
    temp->next = head;
    head = temp;
}

// insert element at the end
void insertAtLast(Node *&tail, int value)
{
    Node *temp = new Node(value);
    tail->next = temp;
    tail = temp;
}

// insert at the position
void insertAtPosition(Node* &tail , Node* &head ,int pos ,int value){
    if(pos == 1){
        insertAtFront(head,value);
        return;
    }

    Node* temp = head;
    int count = 1;
    while( count < pos-1){
        temp = temp->next;
        count++;
    }

    if(temp->next == NULL){
        insertAtLast(tail,value);
        return;
    }

    // create a new node 
    Node* insertNode = new Node(value);
    insertNode->next = temp->next;
    temp->next = insertNode; 
}

void deleteNodeAtPosition(Node* &head,Node* &tail ,int pos){
    // delete the first node
    if(pos == 1){
        Node* temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }else{
        // delete the middle or last element 
        Node* curr = head;
        Node* prev = NULL;
        int count = 1;
        while(count < pos){
             prev = curr;
             curr = curr->next;
             count++;
        } 
        if(curr->next == NULL){
            tail = prev;
        }

        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
    }
}



// print all element of list
void printList(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << "\n";
}


int main ()
{
    // linked list
    Node* head;
    Node* tail;
    Node* first  = new Node(10);
    head = first;
    tail = first;
    printList(head);
    insertAtFront(head,20);
    printList(head);
    insertAtFront(head,30);
    printList(head);
    insertAtLast(tail,5);
    printList(head);
    insertAtLast(tail,2);
    printList(head);

    insertAtPosition(tail, head,3,15);
    printList(head);
    insertAtPosition(tail , head,1,25);
    printList(head);
    insertAtPosition(tail ,head ,8,3);
    printList(head);
    deleteNodeAtPosition(head,tail,8);
    printList(head);


    cout << "Head " << head->data << "\n";
    cout << "Tail " << tail->data << "\n";
    // printList(head);

    return 0;
}