#include<iostream>
#include<vector>
#include<queue>
using namespace std;

vector<int> mergeTwoMaxHeap(vector<int> a, vector<int> b){
    priority_queue<int> pq;
    // making the max heap of first array
    for(int i=0; i<a.size(); i++){
        pq.push(a[i]);
    }
    // making the max heap with second array
    for(int j=0; j<b.size(); j++){
        pq.push(b[j]);
    }
    // creating ans vector for storing the max heap
    vector<int> ans;
    // putting all the element of queue to ans 
    while(!pq.empty()){
        ans.push_back(pq.top());
        pq.pop();
    }

    // return the answer
    return ans;
}

int main ()
{
    int sizeOfA ,sizeOfB;
    cin >> sizeOfA >> sizeOfB;
    vector<int> a(sizeOfA);
    for(int i=0; i<a.size(); i++){
        cin >> a[i];
    }
   
    vector<int> b(sizeOfB);

    for (int i = 0; i < b.size(); i++)
    {
        cin >> b[i];
    }

    vector<int> ans = mergeTwoMaxHeap(a,b);
    for(int i=0; i<ans.size(); i++){
        cout << ans[i] << " ";
    }
    return 0;
}