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
        cout << "data is deleted " << data << "\n";
    }
};

class Stack{

    public:
    
    Node* top ;
     
    Stack(){
        top = NULL;
    }

    void push(int data){
        Node* temp = new Node(data);
        temp->next = top;
        top = temp;
    }

    void pop(){
        if(top == NULL){
            cout << "Stack is Empty " << "\n";
        }
        Node* temp = top;
        top = top->next;
        delete temp;
    }

    int peek(){
        if(top == NULL){
            return -1;
        }else{
            return top->data;
        }
    }

    bool isEmpty(){
        return top == NULL;
    }
};

int main ()
{ 
    Stack st;
    st.push(10);
    st.push(20);
    st.push(30);
    // cout << st.top->data << "\n";
    st.pop();
    st.pop();
    st.pop();
    cout << st.peek() << "\n";
    st.push(50);
    if(st.isEmpty()){
        cout << "stack is empty \n";
    }else{
        cout << "stack is not empty \n";
    }
    cout << st.peek() << "\n";
    return 0;
}