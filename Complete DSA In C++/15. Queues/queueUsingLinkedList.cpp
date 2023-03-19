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

class queue{
    Node* head ;
    Node* tail ;
    int length;
    public:
    queue(){
        this->head = NULL;
        this->tail = NULL;
        this->length =0;
    }

    void push(int data){
        Node *temp = new Node(data);
        if(head == NULL){
            head = temp;
            tail = temp;
            length = 1;
        }else{
            tail->next = temp;
            tail = temp;
            length++;
        }
    }
    
    bool empty(){
        return head==NULL;
    }

    int size(){
        return length;
    }

    void pop(){
        if(empty()){
            cout << "Queue is empty \n";
        }else{
            Node* temp = head;
            head = head->next;
            length--;
            delete temp;
        }
    }
    
    int front(){
        if(head == NULL){
           return -1;
        }else{
            return head->data;
        }
    }

    int back(){
        if(tail == NULL){
            return -1;
        }else{
            return tail->data;
        }
    }

    void print(){
        Node *temp = head;
        while(temp){
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << "\n";
    }
};

int main ()
{
    queue q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.print();
    cout << "after pop first element "<< "\n";
    q.pop();
    q.print();
    cout << "size of the " << q.size() << "\n";
    cout << q.front() << " " << q.back() << "\n";
    q.push(60);
    cout << "after pop first element " << "\n";
    q.pop();
    q.print();
    cout << "size of the " << q.size() << "\n";
    cout << q.front() << " " << q.back() << "\n";

    return 0;
}