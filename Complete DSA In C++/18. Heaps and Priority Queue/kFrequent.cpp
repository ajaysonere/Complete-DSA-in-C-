#include<iostream>
#include<vector>
#include<queue>
#include<map>
#include<unordered_map>
using namespace std;

vector<int> kFrequentNumbersUsingMap(vector<int> vec , int k){
    map<int, int> mp;
    // storing all the element to the map
    for(auto x :vec){
        mp[x]++;
    }
    // again storing the element in multimap and swaping the first and last element
    multimap<int,int,greater<int>>mpp;
    for(auto x :mp){
        mpp.insert({x.second , x.first});
    }

     vector<int > ans;
     int count = 0;
    // putting the first k frequent number into the ans vector
    for(auto it = mpp.begin(); count < k; it++ ){
        ans.push_back(it->second);
        count++;
    }
    return ans;
}

void kFrequentNumberUsingHeap(vector<int> vec, int k){
    unordered_map<int , int> up;
    // element goes into the unordered_map with their frequencies 
    for(int i=0; i<vec.size(); i++){
        up[vec[i]]++;
    }
    // creating the priority queue
    priority_queue<pair<int,int> , vector<pair<int,int>> , greater<pair<int,int>>>p;
    // inserting the element to the priority queue 
    for(auto i = up.begin(); i!= up.end(); i++){
        p.push({i->second , i->first});
        if(p.size()>k){
            p.pop();
        }
    }

    // print the top frequent number 
    while(!p.empty()){
        cout << p.top().second << " ";
        p.pop();
    }

}

int main ()
{
    int size;
    cin >> size;
    // taking input
    vector<int> vec(size);
    for(int i=0; i<vec.size(); i++){
        cin >> vec[i];
    }

    int k;
    cin >> k;
    vector<int> ans = kFrequentNumbersUsingMap(vec , k);
    for(int i=0; i<ans.size(); i++){
        cout << ans[i] << " ";
    }
    cout << "\nUsing the Heap Method " << "\n";
    kFrequentNumberUsingHeap(vec,k);
    return 0;
}