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
    }
};

void insertNode(Node* &tail , int element, int value){
    if(tail == NULL){
        Node* temp = new Node(value);
        tail = temp;
        temp->next = temp;
    }else{

        Node* curr = tail;

        while(curr->data != element){
            curr = curr->next;
        }

        Node* temp = new Node(value);
        temp->next = curr->next;
        curr->next = temp;
    }
}

void printList(Node* tail ){
    Node* temp = tail;

    do{
        cout << tail->data << " ";
        tail = tail -> next;
    }while(temp != tail);
    cout << "\n";
}

int main ()
{
    // circular linked list 
    Node* tail = NULL;

    insertNode(tail,5,3);
    printList(tail);

    insertNode(tail,3, 5);
    printList(tail);

    insertNode(tail ,5,4);
    printList(tail);

    insertNode(tail, 4, 6);
    printList(tail);

    insertNode(tail, 5, 3);
    printList(tail);

    return 0;
}