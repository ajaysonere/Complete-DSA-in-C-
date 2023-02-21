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

void bubbleSort(Node* &head){
    Node* i;
    Node* j;
    i = head;
    bool flag = false;
    for(i = head; i->next!= NULL ; i = i->next){
        for(j = i->next; j!= NULL ; j= j->next){
            if(i->data > j->data){
                flag = true;
                int temp = i->data;
                i->data = j->data;
                j->data = temp;
            }
        }
        if(flag == false){
            cout << "In flag " << "\n";
            return ;
        }
    }
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
    insertAtHead(head, 50);
    insertAtHead(head,40);
    insertAtHead(head,30);
    insertAtHead(head,20);
    insertAtHead(head, 10);
    print(head);
    bubbleSort(head);
    print(head);
    return 0;
}