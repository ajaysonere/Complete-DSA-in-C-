#include<iostream>
using namespace std;
class Node{
    
    public:
    int data;
    Node* prev;
    Node* next;

    Node(int data){
        this->data = data;
        this->prev = NULL;
        this->next = NULL;
    }
};

void insertAtHead(Node* &head ,Node* &tail ,int data){
    if(head == NULL){
        Node* temp = new Node(data);
        head = temp;
        tail = head;
    }else{
        Node* temp = new Node(data);
        temp->next = head;
        head->prev = temp;
        head = temp;
    }
}


void printHead(Node *head)
{
    while (head)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << "\n";
}

void printTail(Node* tail){
    while(tail){
        cout << tail->data << " ";
        tail = tail->prev;
    }
    cout << "\n";
}
int main ()
{
    Node* head = NULL;
    Node* tail = NULL;
    insertAtHead( head, tail ,10);
    insertAtHead( head, tail , 20);
    insertAtHead( head, tail , 30);
    insertAtHead( head, tail , 40);
    insertAtHead( head, tail , 50);
    printHead(head);
    printTail(tail);

    cout << "Head " << head->data << "\n";
    cout << "Tail " << tail->data << "\n";

    // reverse(head);
    // print(head);
    return 0;
}