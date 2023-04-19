#include<iostream>
#include<vector>
#include<unordered_map>
#include<map>
#include<queue>
using namespace std;

vector<int> frequentSort(vector<int> arr ){
    unordered_map<int,int> um;

    for(int i=0; i<arr.size(); i++){
        um[arr[i]]++;
    }

    priority_queue<pair<int,int>> p;

    for(auto i= um.begin(); i!= um.end(); i++){
       p.push({i->second , i->first});
    }

    vector<int> ans;
    while(!p.empty()){
        int freq = p.top().first;
        int element = p.top().second;
        while(freq--){
            ans.push_back(element);
        }
        p.pop();
    }
    return ans;

}

int main ()
{
    int size;
    cin >> size;
    vector<int> vec(size);
    for(int i=0; i<vec.size(); i++){
        cin >> vec[i];
    }
    vector<int>ans = frequentSort(vec);
    for(int i=0; i<ans.size(); i++){
        cout << ans[i] << " ";
    }
    cout << "\n";
    return 0;
}