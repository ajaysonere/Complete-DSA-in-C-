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

void insertAtTail(Node *&head, Node *&tail, int data)
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

Node* getMiddle(Node* head){
    Node* slow = head;
    Node* fast = head;
    while(fast != NULL && fast->next != NULL){
         slow = slow->next;
         fast = fast->next->next;
    }
    return slow;
}

void mergeSort(Node* &head){
    // if list contains 0 or 1 nodes
    if(head == NULL || head->next == NULL){
        return NULL;
    }

    Node* mid = getMiddle(head);
    Node* left = head;
    Node* right = mid->next;
    mid->next = NULL;


    
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
    Node *tail = NULL;
    insertAtTail(head, tail, 10);
    insertAtTail(head, tail, 50);
    insertAtTail(head, tail, 30);
    insertAtTail(head, tail, 60);
    insertAtTail(head, tail, 20);
    insertAtTail(head, tail, 80);
    insertAtTail(head, tail, 90);
    print(head);
    mergeSort(head);
    print(head);
    return 0;
}