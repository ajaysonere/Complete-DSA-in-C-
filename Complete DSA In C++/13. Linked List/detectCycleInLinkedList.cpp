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

void insertAtHead(Node *&head, Node* &tail, int data)
{
     if (head == NULL){
          Node *temp = new Node(data);
          head = temp;
          tail = temp;
     }
     else
     {
          Node *temp = new Node(data);
          temp->next = head;
          head = temp;
     }
     // By this below line we can make our linked list cyclic than it will enfinite time 
     // tail->next = head; 
}

Node* detectCycleInLinkedList(Node* head ){
     Node* slow = head;
     Node* fast = head;
     while(fast != NULL && fast->next != NULL){
          slow = slow->next;
          fast = fast->next->next;
          if(fast == slow){
               return slow;
          }
     }
     return NULL;
}

void print(Node *head)
{
     while (head){
          cout << head->data << " ";
          head = head->next;
     }
     cout << "\n";
}

int main()
{
     Node *head = NULL;
     Node* tail = NULL;
     insertAtHead(head, tail ,10);
     insertAtHead(head, tail ,20);
     insertAtHead(head, tail ,30);
     insertAtHead(head, tail ,40);
     insertAtHead(head, tail ,50);

     print(head);

     Node* detectCycle = detectCycleInLinkedList(head);
     if(detectCycle == NULL){
          cout << "Cycle is not Detected " << "\n";
     }else{
          cout << "cycle is deleted " << "\n";
     }

     // cout << "Head at "<< head->data << "\n";
     // cout << "Tail at "<< tail->data << "\n";
     return 0;
}