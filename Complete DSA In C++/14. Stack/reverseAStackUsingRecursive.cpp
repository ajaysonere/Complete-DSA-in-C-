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
    ~Node(){
        if(next == NULL){
            delete next;
            next = NULL;
        }
    }
};

class Stack{
    Node* head ;
    public:
    Stack(){
        head == NULL;
    }
    // push an element to the stack
    void push(int data){
        Node* temp = new Node(data);
        head->next = temp;
        head = temp;
    }

    void pop(){
        if(head == NULL){
            cout << "stack is underflow " << "\n";
        }else{
            Node* temp = head;
            head = head->next;
            delete temp;
        }
    }

    bool empty(){
        return head == NULL;
    }

    int top(){
        if(head== NULL){
            cout << "stack is underflow " << "\n";
        }else{
            return head->data;
        }
    }
};

int main ()
{
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);

     cout << s.top() << "\n";
    // while(!s.empty()){
    //     cout << s.top() << "\n";
    //     s.pop();
    // }
    return 0;
}