#include<iostream>
using namespace std;
template<typename T>
class Node{
    public:
    T data;
    Node <T> * next;

    Node(T data){
        this->data = data;
        this->next = NULL;
    }
};
template <typename T>
class queue
{
    Node<T> * head ;
    Node<T> * tail ;
    int length;
    public:
    queue(){
        this->head = NULL;
        this->tail = NULL;
        this->length = 0;
    }

    void push(T data){
        Node<T> *temp = new Node <T>(data);
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
            Node<T> * temp = head;
            head = head->next;
            length--;
            delete temp;
        }
    }
    
    T front(){
        if(head == NULL){
           return -1;
        }else{
            return head->data;
        }
    }

    T back(){
        if(tail == NULL){
            return -1;
        }else{
            return tail->data;
        }
    }

    void print(){
        if(head == NULL){
            cout << "Queue has nothing to print \n";
            return;
        }
        Node<T>*temp = head;
        while(temp){
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << "\n";
    }
};

int main ()
{
    queue<string>q;
    // q.push(10);
    // q.push(20);
    // q.push(30);
    // q.push(40);
    // q.push(50);
    // q.print();
    // cout << "after pop first element "<< "\n";
    // q.pop();
    // q.print();
    // cout << "size of the " << q.size() << "\n";
    // cout << q.front() << " " << q.back() << "\n";
    // q.push(60);
    // cout << "after pop first element " << "\n";
    // q.pop();
    // q.push(71);
    // q.pop();
    // q.pop();
    // // q.pop();
    // // q.pop();
    // // q.pop();
    // q.print();
    // cout << "size of the " << q.size() << "\n";
    // cout << q.front() << " " << q.back() << "\n";
    // q.empty()?cout << "Queue is empty \n":cout<< "Queue is not Empty \n";

    q.push("ajay");
    q.push("vijay");
    q.push("anjali");
    q.print();
    q.pop();
    q.print();
    cout << "size is :" << q.size() << "\n";


    return 0;
}