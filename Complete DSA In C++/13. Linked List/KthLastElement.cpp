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

void insertAtHead(Node *&head, int data)
{
    if (head == NULL)
    {
        Node *temp = new Node(data);
        head = temp;
    }
    else
    {
        Node *temp = new Node(data);
        temp->next = head;
        head = temp;
    }
}

int getLength(Node *head){
    int count = 0;
    while (head)
    {
        count++;
        head = head->next;
    }
    return count;
}

int KthLastElement (Node *head, int k){
    int lenght = getLength(head);
    int count = 0;
    while(count < (lenght-k)){
        count++;
        head = head->next;
    }
    return head->data;
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
    insertAtHead(head, 10);
    insertAtHead(head, 20);
    insertAtHead(head, 30);
    insertAtHead(head, 40);
    insertAtHead(head, 50);
    print(head);
    int k;
    cin >> k;
    int lastElement = KthLastElement(head,k);
    cout << "K th Last Element " << lastElement << "\n";
    return 0;
}