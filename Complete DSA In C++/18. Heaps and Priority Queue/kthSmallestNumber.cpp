#include<iostream>
#include<algorithm>
#include<queue>
using namespace std;


// naive approach (nlogn)
int kthSmallest(int arr[], int size,int k){
    sort(arr,arr+size);
    k--;
    return arr[k];
}

// optimized approach O(n)

int kthSmallestOpt(int arr[], int size, int k){
    priority_queue<int> pq;
    // inserting element in max heap of size k
    for(int i=0; i<k; i++){
        pq.push(arr[i]);
    }
    // now inserting k+1 element in queue when queue top is less than element and pop the top element for maintaing the k size of the array
    for(int i=k; i<size; i++){
        if(pq.top() > arr[i]){
            pq.pop();
            pq.push(arr[i]);
        }
    }
    int ans = pq.top();
    return ans;
}

int main ()
{
    int size;
    cin >> size;
    int arr[size];
    for(int i=0; i<size; i++){
        cin >> arr[i];
    }
    int k;
    cin >> k;
    int ans = kthSmallest(arr,size,k);
    cout << "Kth Smallest " << ans << "\n";
    int ansOptimized = kthSmallestOpt(arr, size, k);
    cout << "Kth Smallest " << ansOptimized << "\n";
    return 0;
}