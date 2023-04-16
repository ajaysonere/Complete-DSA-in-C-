#include<iostream>
#include<vector>
#include<queue>
using namespace std;

int getKthLargestElement(vector<int> vec , int k){
    // creating min heap
    priority_queue<int ,vector<int> , greater<int>> pq;
    // inserting the element to the min heap
    for(int i=0; i<vec.size(); i++){
        pq.push(vec[i]);
        if(pq.size()>k){
            pq.pop();
        }
    }
    return pq.top();
}

int main ()
{
    int size;
    cin >> size;
    vector<int> vec(size);
    for(int i=0; i<vec.size(); i++){
        cin >> vec[i];
    }
    int k;
    cin >> k;
    int KthLargestElement = getKthLargestElement(vec,k);
    cout << "Kth Largest Element " << KthLargestElement << "\n";
    return 0;
}