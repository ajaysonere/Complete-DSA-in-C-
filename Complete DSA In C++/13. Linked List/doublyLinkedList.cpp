#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *prev = NULL;
    Node *next = NULL;

    Node(int value)
    {
        this->data = value;
        this->prev = NULL;
        this->next = NULL;
    }

    ~Node(){
        int value = this->data;
        if(next != NULL){
            delete next;
            next = NULL;
        }
        cout << "Memory is free for " << value << "\n";
    }
};

void insertAtFront(Node *&tail, Node *&head, int value)
{

    // create new node
    if (head == NULL)
    {
        Node *temp = new Node(value);
        head = temp;
        tail = temp;
    }
    else
    {
        Node *temp = new Node(value);
        temp->next = head;
        head->prev = temp;
        head = temp;
    }
}

void insertAtTail(Node *&tail, Node *&head, int value)
{

    // create a new node
    if (tail == NULL)
    {
        Node *temp = new Node(value);
        head = temp;
        tail = temp;
    }
    else
    {
        Node *temp = new Node(value);
        tail->next = temp;
        temp->prev = tail;
        tail = temp;
    }
}

void insertAtPosition(Node *&tail, Node *&head, int pos, int value)
{
    if (pos == 1)
    {
        insertAtFront(tail, head, value);
        return;
    }
    Node *temp = head;
    int count = 1;
    while (count < pos - 1)
    {
        temp = temp->next;
        count++;
    }

    if (temp->next == NULL)
    {
        insertAtTail(tail, head, value);
        return;
    }

    Node *insertNode = new Node(value);
    insertNode->next = temp->next;
    temp->next->prev = insertNode;
    temp->next = insertNode;
    insertNode->prev = temp;
}

void deleteNodeAtAnyPosition(Node *&head, Node *&tail, int pos)
{
    if (pos == 1)
    {
        Node *temp = head;
        temp -> next -> prev = NULL;
        head = temp->next;
        temp->next = NULL;
        delete temp;
        return ;
    }

    Node* curr = head;
    Node* prev = NULL;
    int count =1;
    while(count < pos){
        prev = curr;
        curr = curr->next;
        count++;
    }
    if(curr->next == NULL){
        prev->next = NULL;
        curr ->prev = NULL;
        tail = prev;
        delete curr;
        return;
    }
    curr->prev = NULL;
    prev->next = curr->next;
    curr->next->prev = prev;
    curr->next = NULL;
    delete curr;
}

// print the element of the list
void printList(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << "\n";
}

// get the lenght of the linked list
int getLengthOfList(Node *head)
{
    int count = 0;
    while (head != NULL)
    {
        head = head->next;
        count++;
    }
    return count;
}

int main()
{
    // Doubly linked List
    Node *head = NULL;
    Node *tail = NULL;

    printList(head);

    insertAtFront(tail, head, 200);

    printList(head);

    insertAtFront(tail, head, 300);

    printList(head);

    insertAtTail(tail, head, 50);

    printList(head);

    insertAtPosition(tail, head, 1, 400);

    printList(head);

    insertAtPosition(tail, head, 5, 25);

    printList(head);

    insertAtTail(tail, head, 500);

    printList(head);
    
    deleteNodeAtAnyPosition(head, tail,1);

    printList(head);

    deleteNodeAtAnyPosition(head,tail,3);
    printList(head);

    deleteNodeAtAnyPosition(head,tail,4);
    printList(head);

    deleteNodeAtAnyPosition(head, tail, 3);
    printList(head);
    // cout << "Lenght is " << getLengthOfList(head) << "\n";
    cout << "Head is " << head->data << "\n";
    cout << "Tail is " << tail->data << "\n";
    return 0;
}