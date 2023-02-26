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

void print(Node *head)
{
    while (head)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << "\n";
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

Node *findMid(Node *head)
{
    Node *slow = head;
    Node *fast = head->next;

    while (fast != NULL && fast->next != NULL)
    {
         slow = slow->next;
         fast = fast->next->next;
    }
    return slow;
}

Node *merge(Node *left, Node *right)
{

    if (left == NULL)
         return right;

    if (right == NULL)
         return left;

    Node *ans = new Node(-1);
    Node *temp = ans;

    // merge 2 sorted Linked List
    while (left != NULL && right != NULL)
    {
         if (left->data < right->data)
         {
             temp->next = left;
             temp = left;
             left = left->next;
         }
         else
         {
             temp->next = right;
             temp = right;
             right = right->next;
         }
    }

    while (left != NULL)
    {
         temp->next = left;
         temp = left;
         left = left->next;
    }

    while (right != NULL)
    {
         temp->next = right;
         temp = right;
         right = right->next;
    }

    ans = ans->next;
    return ans;
}

Node *mergeSort(Node *head)
{
    // base case
    if (head == NULL || head->next == NULL)
    {
         return head;
    }

    // break linked list into 2 halvs, after finding mid
    Node *mid = findMid(head);

    Node *left = head;
    Node *right = mid->next;
    mid->next = NULL;

    // recursive calls to sort both halves
    left = mergeSort(left);
    right = mergeSort(right);

    // merge both left and right halves
    Node *result = merge(left, right);

    return result;
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
    Node* ans =  mergeSort(head);
    print(ans);
    return 0;
}