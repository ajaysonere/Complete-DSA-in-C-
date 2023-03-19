#include<iostream>
using namespace std;

class queue{
    int *arr;
    int length;
    int front;
    int rear;
    int data;
    public:
    queue(int length){
        this->length = length;
        this->front = 0;
        this->rear = -1;
        arr = new int[length];
    }
    void push(int data);
    void pop();
    int queueFront();
    int queueRear();
    int size();
    bool empty();
};

void queue::push(int data){
   if(rear == length){
      cout << "queue is already full  \n";
   }else{
      rear++;
      arr[rear] = data;
   }
}

void queue::pop(){
    if(front == rear){
        cout << "queue is empty \n";
    }else{
        front++;
        if(front == rear){
            front = 0;
            rear =  0;
        }
    }
}

int queue::queueFront(){
    if(front == rear){
        cout << "Front is empty \n";
    }else{
        return arr[front];
    }
}

int queue::queueRear(){
    if(front == rear){
        cout << "Rear is empty \n";
    }else{
        return arr[rear];
    }
}

int queue::size(){
    return length;
}

bool queue::empty(){
    return (front == rear);
}


int main (){
    // Queue using the 
    queue q(5);
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    cout << q.queueFront() << " " << q.queueRear() << "\n";
    
    return 0;
}