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

Node* middleOfLinkedList(Node* head , int midElement){
    if(head == NULL ){
        cout << "List Is Empty " << "\n";
        return head; 
    }else{
        Node* temp = head;
        int count = 0;
        while(count < midElement){
            count++;
            temp = temp->next;
        }
        return temp;
    }
}

int getLength(Node *head){
     int count = 0;
     while(head){
        count++;
        head = head->next;
     }
     return count;
}

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
    insertAtHead(head, 10);
    insertAtHead(head, 20);
    insertAtHead(head, 30);
    insertAtHead(head, 40);
    insertAtHead(head, 50);
    print(head);
    int midElement = getLength(head);
    cout << midElement << "\n";
    Node* temp = middleOfLinkedList(head ,midElement/2);
    cout << temp->data << "\n";
    return 0;
}