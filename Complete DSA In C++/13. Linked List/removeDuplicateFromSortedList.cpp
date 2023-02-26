#include <iostream>
using namespace std;

class Node
{

public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void insertAtTail(Node *&head, Node* &tail, int data)
{
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

void removeDuplicateFromList(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        if((temp->next != NULL) && (temp->data == temp->next->data)){
            temp->next = temp->next->next;
        }else{
          temp = temp->next;
       }
    }
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
    Node* tail = NULL;
    insertAtTail(head, tail , 10);
    insertAtTail(head, tail , 20);
    insertAtTail(head, tail , 30);
    insertAtTail(head, tail , 30);
    insertAtTail(head, tail , 40);
    insertAtTail(head, tail , 40);
    insertAtTail(head, tail , 40);
    print(head);
    removeDuplicateFromList(head);
    print(head);
    

    return 0;
}