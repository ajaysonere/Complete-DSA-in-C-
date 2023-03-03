#include<iostream>
using namespace std;

// stack using linked list:
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
        }
        // cout << "Data is deleted " << data << "\n \n";
    }
};

class Stack{
    Node* head;
    public:
    Stack(){
        head = NULL;
    }
    // push an element in stack
    void push(int data){
        Node* temp = new Node(data);
        temp->next = head;
        head = temp;
    }

    // return whether the stack is empty or contain ant data
    bool isEmpty(){
        return head == NULL;
    }


    // return the top element of the stack  
    int peek(){
        if(head == NULL){
           cout << "stack is underFlow " << "\n";
           exit(0);
        }else{
        return head->data;
        }
    }

    void pop(){
        if(head == NULL){
            cout << "stack is underFlow " << "\n";
        }else{
            Node* temp = head;
            head = head->next;
            delete temp;
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
    
    while(!s.isEmpty()){
        cout << s.peek() << " ";
        s.pop();
    }
    return 0;
}