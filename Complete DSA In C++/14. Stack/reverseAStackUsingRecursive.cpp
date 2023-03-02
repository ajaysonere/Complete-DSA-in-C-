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
    ~Node()
    {
        if (next == NULL)
        {
            delete next;
            next = NULL;
        }
        // cout << "data is deleted " << data << "\n";
    }
};

class Stack{
    Node* head ;
    public:
    Stack(){
        head == NULL;
    }
    // push an element to the stack
    void push(int data)
    {
        Node* temp = new Node(data);
        temp->next = head;
        head = temp;
    }

    void pop()
    {
        if (head != NULL)
        {
            Node* temp = head;
            head = head->next;
            delete temp;
        }
        else
        {
            return;
        }
    }

    bool empty(){
        return (head == NULL);
    }

    int top()
    {
        if (head == NULL)
            return -1;
        else
            return head->data;
    }
};

int main ()
{
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);

    //  cout << s.top() << "\n";
    while(!s.empty()){
        cout << s.top() << "\n";
        s.pop();
    }
    return 0;
}