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
    public:
    Node* head;
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

// void insertAtBottom(int element , stack<int> &s){
//     if(s.empty()){
//         s.push(element);
//         return ;
//     }
//     int temp = s.top();
//     s.pop();
//     insertAtBottom(element ,s);
//     s.push(temp);
// }

// void reverseNumber(stack<int> &a){
//     if(a.empty()){
//         return ;
//     }
//     int temp = a.top();
//     a.pop();
//     reverseNumber(a);
//     insertAtBottom(temp , a);
//     // cout << temp << " ";
//     // a.push(temp);
// }

// time complexity is O(1) ans spce complexity is O(n);
// void reverseStack(Stack s, Stack &ans)
// {
//     if (s.isEmpty() == true)
//     {
//         return;
//     }
//     ans.push(s.peek());
//     s.pop();
//     reverseStack(s, ans);
// }


// time complexity is O(1) ans space complexity is O(1)
void insertAtBottom(Stack &s , int element){
    if(s.isEmpty()){
        s.push(element);
        return;
    }
    int temp = s.peek();
    s.pop();
    insertAtBottom(s,element);
    s.push(temp);
}

void reverseStack(Stack &s){
    if(s.isEmpty()){
        return ;
    }
    int temp = s.peek();
    s.pop();
    reverseStack(s);
    insertAtBottom(s,temp);
}

int main ()
{
    Stack s ;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
  
    reverseStack(s);

    while(!s.isEmpty()){
        cout << s.peek() << " ";
        s.pop();
    }

    return 0;
}