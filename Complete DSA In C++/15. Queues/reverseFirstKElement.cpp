#include<iostream>
#include<queue>
#include<stack>
using namespace std;

void reverseQueueInGroup(deque<int> &d, int k)
{
    stack<int> s;
    int count = 0 ;
    while(count < k){
        int element = d.front();
        d.pop_front();
        s.push(element);
        count++;
    }
    while(!s.empty()){
        int element = s.top();
        s.pop();
        d.push_back(element);
    }

    count = 0;
    while(count < d.size()-k){
        int element = d.front();
        d.pop_front();
        d.push_back(element);
        count++;
    }
}

int main ()
{
    deque<int> d;
    d.push_back(1);
    d.push_back(2);
    d.push_back(3);
    d.push_back(4);
    d.push_back(5);

    int k;
    cin >> k;
    reverseQueueInGroup(d,k);
    while(!d.empty()){
        cout << d.front() << " ";
        d.pop_front();
    }
    return 0;
}