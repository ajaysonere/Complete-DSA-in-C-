#include<iostream>
using namespace std;

class queue{
    public:
    int *arr;
    int length;
    int front;
    int rear;
    int capacity;

    queue(int length){
        this->length = length;
        arr = new int[length];
        front = -1;
        rear = -1;
        capacity = 0;
    }

    void push(int data){
        if((rear == length-1 && front == 0) || (rear == (front-1)%(length-1))){
            cout << "queue is full \n";
            return ;
        }else if(front == -1){
            front = rear = 0;
            arr[rear] = data;
            capacity = 0;
        }else if(rear == length-1 && front != 0){
            rear = 0;
            arr[rear] = data;
            capacity++;
        }else{
            rear++;
            arr[rear] = data;
            capacity++;
        }
    }

    bool empty(){
        return front == -1;
    }

    int size(){
        return length;
    }

    void pop(){
        if(empty()){
            cout << "queue is empty \n";
        }else if(front == rear){
            front = rear = -1;
            capacity--;
        }else if(front == length-1){
            front =0;
            capacity--;
        }else{
            front++;
            capacity--;
        }
    }

    void print(){
        for(int i=0; i< capacity;i++){
            cout << arr[i] <<" ";
        }
        cout << "\n";
    }

};


int main (){
    
    queue q(5);
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.print();
    cout << "size is " << q.size() << "\ncapacity is :" << q.capacity <<"\n";
    q.empty()?cout <<"queue is empty \n" : cout << "queue is not empty \n"; 
    return 0;
}