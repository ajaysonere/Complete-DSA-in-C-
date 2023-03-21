#include<iostream>
using namespace std;

class dequeue{
    int *arr;
    int length;
    int front;
    int rear;
    int capacity;
    public:
    dequeue(int length){
        this->length = length;
        this->front = -1;
        this->rear = -1;
        this->capacity = 0;
        arr = new int[length];
    }
    void push_front(int data);
    void pop_front();
    void push_back(int data);
    void pop_back();
    int get_front();
    int get_back();
    bool empty();
    void display();
};

void dequeue::push_front(int data){
    if((front == 0 && rear == length-1) || (rear == (front-1)%(length-1))){
        cout << "dequeue is empty \n";
        return ;
    }else if(front == -1){
        front = rear = 0;
    }else if(front == 0){
        front = length-1;
    }else{
        front--;
    }
    arr[front] = data;
    capacity++;
}

void dequeue::pop_front(){
    if(front == -1){
        cout << "queue is empty \n";
        return ;
    }else if(front == rear){
        // for single element
        front = rear = -1;
    }
    else if (front == length - 1)
    {
        // for maintaing the cyclic nature of queue
        front = 0;
    }else{
        front++;
    }
    capacity--;
}

void dequeue :: push_back(int data){
    if((front == 0 && rear == length-1) || (rear == (front-1)%(length-1))){
        cout << "queue is full \n";
        return;
    }else if(front == -1){
        front = rear = 0;
    }else if(rear == length-1 && front != 0){
        rear = 0;
    }else{
        rear++;
    }
    arr[rear] = data;
    capacity++;
}

void dequeue::pop_back(){
    if(front == -1){
        cout << "Queue is empty \n";
        return ;
    }else if(front == rear){
        front = rear = -1;
    }else if(rear == 0){
        rear = length-1;
    }else{
        rear--;
    }
    capacity--;
}

int dequeue::get_front(){
    if(front == -1){
        cout << "Queue is empty \n";
    }else{
        return arr[front];
    }
}

int dequeue::get_back(){
    if(front == -1){
        cout << "Queue is empty \n";
    }else{
        return arr[rear];
    }
}

bool dequeue::empty(){
    return (front == -1);
}

void dequeue::display(){
    for(int i=0; i<capacity; i++){
        cout << arr[i] << " ";
    }
    cout << "\n";
}


int main ()
{
    dequeue d(10);
    d.push_front(11);
    d.push_back(15);
    d.push_back(25);
    d.push_back(30);
    // here we can do front we ones beacuse
    // d.push_front(5);
    d.display();
    return 0;
}