#include<iostream>
#include<stack>
#include<queue>
using namespace std;

void reverseQueue(queue<int> &q){

    if(q.empty()){
        cout << "Queue is empty \n";
    }else{
        stack<int> s;
        // coping element from the queue 
        while(!q.empty()){
            int element = q.front();
            q.pop();
            s.push(element);
        }
        // again coping the element stack to queue
        while(!s.empty()){
            int element = s.top();
            s.pop();
            q.push(element);
        }
    }
}

int main ()
{
    queue<int> q;
    q.push(4);
    q.push(3);
    q.push(1);
    q.push(10);
    q.push(2);
    q.push(6);

    reverseQueue(q);
    cout << "After reversing queue : \n";
    while(!q.empty()){
        cout << q.front() << " ";
        q.pop();
    }
    return 0;
}