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
        cout << "Memory is freed " << data << "\n";
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

void deleteNode(Node* &tail , int value){
    if(tail == NULL){
        cout << "List is Empty in Delete :" << "\n";
        return;
    }else{
        Node* prev = tail;
        Node* curr = prev->next;

        while(curr->data != value){
            prev = curr;
            curr = curr->next;
        }
        // for 1 node
        if(curr == prev){
            tail = NULL;
            // cout << "Reurn"<< "\n";
            return ;
        }

        // for greater than 2
        if(curr == tail){
            tail = prev;
        }
        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
    }
}

void printList(Node* tail ){
    Node* temp = tail;

     if(tail == NULL){
        cout << "List is Empty in Print " << "\n";
        return ;
     }

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

    // insertNode(tail ,5,4);
    // printList(tail);

    // insertNode(tail, 4, 6);
    // printList(tail);

    // insertNode(tail, 5, 3);
    // printList(tail);

    // insertNode(tail, 6, 13);
    // printList(tail);

    // deleteNode(tail ,3);
    // printList(tail);
    // cout << "tail is pointed to " << tail->data << "\n";
    return 0;
}