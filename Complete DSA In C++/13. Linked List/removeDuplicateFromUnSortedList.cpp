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

// first approach of remove duplicate of linkedlist using the nested for loop 
// Time Complexity O(N^2)

// void removeDuplicateFromUnSortedList(Node *&head)
// {
//     for (Node *i = head; i != NULL; i = i->next)
//     {
//         for (Node *j = i->next; j != NULL; j = j->next)
//         {
//             if ((i->next != NULL) && (i->data == j->data))
//             {
//                 i->next = i->next->next;
//             }
//             else
//             {
//                 i = i->next;
//             }
//         }
//     }
// }

/*
Second App - > 

Step 1 : first we sort the linked list 
step 2 : Than we simply remove the duplicate from the Linked List  
Time Complexity will ->  O(nLOgn)


*/

void removeDupNodesFromList(Node* &head){
    // sort the linked list
    for(Node* i = head; i-> next != NULL ; i = i->next){
        for(Node* j = i->next ; j != NULL ; j = j->next){
            if(i->data > j->data){
                int data = i->data;
                i->data = j->data;
                j->data = data;
            }
        }
    }
   
    // Remove the duplicate nodes
    Node * curr = head;
    while(curr){
        if((curr->next != NULL) && (curr->data == curr->next->data)){
            curr->next = curr->next->next;
        }else{
            curr = curr->next;
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
    Node *tail = NULL;
    insertAtTail(head, tail, 10);
    insertAtTail(head, tail, 40);
    insertAtTail(head, tail, 30);
    insertAtTail(head, tail, 30);
    insertAtTail(head, tail, 20);
    insertAtTail(head, tail, 20);
    insertAtTail(head, tail, 50);
    insertAtTail(head, tail, 50);
    print(head);
    // removeDuplicateFromUnSortedList(head);
    removeDupNodesFromList(head);
    print(head);

    return 0;
}