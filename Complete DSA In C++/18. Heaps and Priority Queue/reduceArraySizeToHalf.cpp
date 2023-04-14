#include<iostream>
#include<vector>
#include<map>

using namespace std;

int reduceArraySizeToHalf(vector<int>&arr){
    map<int,int>mp;
    for(auto key : arr){
        mp[key]++;
    }
    multimap<int , int , greater<int>> mpp;
    for(auto x : mp){
        mpp.insert({x.second , x.first});
    }
    // for(auto it = mpp.begin(); it != mpp.end(); it++){
    //     cout << it->first << " " << it->second << "\n";
    // }
    int size = arr.size();
    int sum = size;
    int count = 0;
    for(auto it = mpp.begin(); it != mpp.end(); it++){
        sum = sum - it->first;
        count++;
        if(sum <= size/2){
          break;
        }
    }
    return count;
}

int main ()
{
    int size;
    cin >> size;
    vector<int> v(size);
    for(int i=0; i<v.size(); i++){
        cin >> v[i];
    }
    int ans = reduceArraySizeToHalf(v);
    cout << "Answer is " << ans << "\n";
    return 0;
}