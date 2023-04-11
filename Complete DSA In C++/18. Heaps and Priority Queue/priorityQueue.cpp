#include<iostream>
#include<queue>
using namespace std;

int main ()
{
    // ceating maxheap
    priority_queue<int> pq;
    pq.push(10);
    pq.push(20);
    pq.push(30);
    pq.push(40);
    pq.push(50);
    cout << "size " << pq.size() << "\n" ;
    cout << "Top Element " << pq.top() << " \n";
    pq.pop();
    cout << "Top Element " << pq.top() << "\n";
    cout << "size " << pq.size() << "\n";
    if(pq.empty()){
        cout << "Priority queue is empty " << "\n";
    }else{
        cout << "Priority queue is not empty " << "\n";
    }

    // minheap 
    priority_queue<int , vector<int> , greater<int>> mp;
    mp.push(10);
    mp.push(20);
    mp.push(30);
    mp.push(40);
    mp.push(50);
    cout << "size " << mp.size() << "\n";
    cout << "Top element is " << mp.top() << "\n";
    mp.pop();
    cout << "Top element is " << mp.top() << "\n";
    cout << "size " << mp.size() << "\n";
    return 0;
}