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

Node* alternateMerge(Node* root1 , Node* root2){
     Node* head = new Node(0);
     Node* curr = head;
     while(root1 != NULL && root2 != NULL){
        curr->next = root1;
        curr = curr->next;
        root1 = root1->next;
        curr->next = root2;
        curr = curr->next;
        root2 = root2->next;
     }
     if(root1 != NULL){
        curr->next = root1;
     }
     if(root2 != NULL){
        curr->next = root2;
     }
     return head->next;
}

void print(Node* head)
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
    Node* root1 = NULL;
    Node* root2 = NULL;
    insertAtHead(root1, 10);
    insertAtHead(root1, 20);
    insertAtHead(root1, 30);
    insertAtHead(root1, 40);
    insertAtHead(root1, 50);
    print(root1);
    insertAtHead(root2, 60);
    insertAtHead(root2, 70);
    insertAtHead(root2, 80);
    insertAtHead(root2, 90);
    // insertAtHead(root2, 100);
    print(root2);
    Node* head =  alternateMerge(root1, root2);
    cout << "Alternate Merge " << "\n";
    print(head);

    return 0;
}