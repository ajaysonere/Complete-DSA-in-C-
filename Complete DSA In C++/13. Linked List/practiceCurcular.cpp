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
        cout << "Memroy is realied " << data << "\n";
    }
};

void insertAtFront(Node* &tail ,int element, int data){
    if(tail == NULL){
        Node* temp = new Node(data);
        tail = temp;
        temp->next = temp;
    }else{
        Node* curr = tail;

        while(curr->data != element){
            curr = curr->next;
        }
        Node* temp = new Node(data);
        temp->next = curr->next;
        curr->next = temp;
    }
}

void deleteNode(Node* &tail, int value){
   if(tail == NULL){
     cout << "list is empty " << "\n";
   }else{
        Node* prev = tail;
        Node* curr = prev->next;
        while(curr->data != value){
            prev = curr;
            curr = curr->next;
        }

        if(curr == prev ){
            tail = NULL;
            return;
        }
        if(curr == tail){
            tail = prev;
        }
        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
   }
}

void print(Node* tail){
    if(tail == NULL){
        cout << "List is empty " << "\n";
        return;
    }
    Node* temp = tail;

    do{
        cout << tail->data << " ";
        tail = tail->next;
    }while(tail != temp);
    cout << "\n";
}

int main ()
{ 
    Node* tail = NULL;
    
    insertAtFront(tail,3,5);
    print(tail);

    insertAtFront(tail,5,3);
    print(tail);

    insertAtFront(tail, 5, 4);
    print(tail);

    insertAtFront(tail, 3, 8);
    print(tail);

    deleteNode(tail,3);
    print(tail);
    return 0;
}