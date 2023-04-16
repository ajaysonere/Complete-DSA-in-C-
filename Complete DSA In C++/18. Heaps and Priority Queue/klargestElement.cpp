#include<iostream>
#include<vector>
#include<queue>
using namespace std;

vector<int> kLargestElement(vector<int>vec , int k){
    vector<int> ans;
    priority_queue<int, vector<int> , greater<int>> pq;
    // inserting element in min heap 
    for(int i=0; i<vec.size(); i++){
        pq.push(vec[i]);
        if(pq.size()>k){
            pq.pop();
        }
    }

    // storing the k largest element in vector
    while(!pq.empty()){
        ans.push_back(pq.top());
        pq.pop();
    }
    // return ans
    return ans;
}

int main ()
{
    int size;
    cin >> size;
    vector<int> vec(size);
    // taking the element 
    for(int i=0; i<vec.size(); i++){
        cin >> vec[i];
    }

    int k;
    cin >> k;
    vector<int> ans = kLargestElement(vec,k);
    cout <<"K Largest Element is " << "\n";
    for(int i=0; i<ans.size(); i++){
      cout << ans[i] << " ";
    }

    return 0;
}