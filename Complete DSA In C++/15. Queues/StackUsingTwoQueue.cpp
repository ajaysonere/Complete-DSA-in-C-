#include<iostream>
#include<queue>
using namespace std;

class stack{
   queue<int> q1,q2;
   public:
   void push(int data);
   void pop();
   int top();
   bool empty();
};

void stack::push(int data){
    // if q1 is not empty than push in q1 otherwise push in q2.
    if(!q1.empty()){
        q1.push(data);
    }else{
        q2.push(data);
    }
}

void stack::pop(){
    if(empty()){
        cout << "stack is empty \n";
        return ;
    }

    if(q1.empty()){
        while(!q2.empty()){
            int front = q2.front();
            q2.pop();
            if(q2.empty()){
                break;
            }
            q1.push(front);
        }
    }else{
        while(!q1.empty()){
            int front = q1.front();
            q1.pop();
            if(q1.empty()){
                break;
            }
            q2.push(front);
        }
    }
}

int stack::top(){
    
    if(empty()){
        cout << "stack is empty \n";
        return -1;
    }

    if(q1.empty()){
        while(!q2.empty()){
            int front = q2.front();
            q2.pop();
            q1.push(front);
            if(q2.empty()){
                return front;
            }
        }
    }else{
        while(!q1.empty()){
            int front = q1.front();
            q1.pop();
            q2.push(front);
            if(q1.empty()){
                return front;
            }
        }
    }
}

bool stack::empty(){
    return (q1.empty() && q2.empty());
}

int main ()
{
    stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.pop();
    s.push(40);
    s.push(50);

    while(!s.empty()){
        cout << s.top() << " ";
        s.pop();
    }
    cout <<"\n";
    return 0;
}