#include<iostream>
#include<queue>
#include<vector>
using namespace std;

vector<int>  kSortedArray(vector<int> v , int k){
    vector<int> ans;
    // creating min heap
    priority_queue<int, vector<int> , greater<int>> pq;
    
    // inserting element in min heap
    for(int i=0; i<v.size(); i++){
        pq.push(v[i]);
        if(pq.size() > k){
            ans.push_back(pq.top());
            pq.pop();
        }
    }

    // inserting remaining element in vector
    while(!pq.empty()){
        ans.push_back(pq.top());
        pq.pop();
    }
    return ans;
}

int main ()
{
    int size;
    cin >> size;
    vector<int> vec(size);
    // taking the element
    for (int i = 0; i < vec.size(); i++)
    {
        cin >> vec[i];
    }

    int k;
    cin >> k;
    vector<int> ans = kSortedArray(vec, k);
    cout << "K Largest Element is "<< "\n";
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    return 0;
}