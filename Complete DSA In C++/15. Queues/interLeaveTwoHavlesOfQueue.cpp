#include<iostream>
#include<queue>
using namespace std;

queue<int> interLeave(queue<int> q){
    queue<int> halfQueue;
    int mid = (q.size()/2);
    // inserting first half to new queue

    while(mid--){
        int val = q.front();
        q.pop();
        halfQueue.push(val);
    }

    // then picking up element from both the queues
    while(!halfQueue.empty()){
        int val = halfQueue.front();
        halfQueue.pop();
        q.push(val);
        val = q.front();
        q.pop();
        q.push(val);
    }
    return q;

}

int main ()
{
    queue<int> q;
    q.push(11);
    q.push(12);
    q.push(13);
    q.push(14);
    q.push(15);
    q.push(16);
    q.push(17);
    q.push(18);
    q.push(19);
    q.push(20);
    
    queue<int> ans = interLeave(q);

    while(!ans.empty()){
        cout << ans.front() << " ";
        ans.pop();
    }
    return 0;
}