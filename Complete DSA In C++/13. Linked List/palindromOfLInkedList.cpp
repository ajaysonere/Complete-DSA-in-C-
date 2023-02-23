#include<iostream>
using namespace std;

class Node{

    public:
    char ch;
    Node* next;

    Node(char ch){
        this->ch = ch;
        this->next = NULL;
    }
};

void insertAtHead(Node* &head , char ch){
    if(head == NULL){
        Node* temp = new Node(ch);
        head = temp;
    }else{
        Node *temp = new Node(ch);
        temp->next = head;
        head = temp;
    }
}

Node* middle(Node* head){
    Node* fast = head;
    Node* slow = head;
    // int count = 1;
    while(fast && fast->next){
        slow = slow->next;
        fast = fast->next->next;
        // count = count+2;
    }
    // cout << slow->ch << "\n";
    // cout << count << "\n";
    return slow;
}
Node* reverse(Node* mid){
     Node* prev = NULL;
     Node* temp = mid;
     while(mid){
        temp =  mid->next;
        mid->next = prev;
        prev = mid;
        mid = temp;
     }
     return prev;
}

bool isPalindrom(Node* head ){
    if(head->next == NULL){
        return true;
    }

    if(head->next->next == NULL){
        if(head->ch == head->next->ch){
            return true;
        }
        return false;
    }
    
    Node* mid = middle(head);
    Node* last = reverse(mid);
    Node* curr = head;
    while(last){
        if(curr->ch != last->ch){
            return false;
        }
        curr = curr->next;
        last = last->next;
    }
    return true;
}

void print(Node* head){
    while(head){
        cout << head->ch << " ";
        head = head->next;
    }
    cout << "\n";
}

int main ()
{
    Node* head = NULL;
    insertAtHead(head, 'a');
    insertAtHead(head, 'b');
    insertAtHead(head, 'a');
    insertAtHead(head, 'c');
    insertAtHead(head, 'b');
    insertAtHead(head, 'a');

    print(head);
    bool ans = isPalindrom(head);
    if(ans){
        cout << "Palindrom " << "\n";
    }else{
        cout << "Not Palindrom " << "\n";
    }
    // middle(head);
    return 0;
}