#include<iostream>
#include<vector>
#include<queue>
#include<map>
using namespace std;

vector<int> kFrequentNumbers(vector<int> vec , int k){
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
    vector<int> ans = kFrequentNumbers(vec , k);
    for(int i=0; i<ans.size(); i++){
        cout << ans[i] << " ";
    }

    return 0;
}