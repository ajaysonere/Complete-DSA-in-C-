#include<iostream>
#include<vector>
#include<queue>

using namespace std;

void kClosestPointToOrigin(vector<pair<int,int>>arr , int k){
    priority_queue<pair<int,pair<int,int>>> p;
    for(int i=0; i<arr.size(); i++){
        p.push({arr[i].first*arr[i].first+arr[i].second*arr[i].second,{arr[i].first , arr[i].second}});
        if(p.size()>k){
           p.pop();
        }
    }
    cout << "K Closest Element " << "\n";
    while(!p.empty()){
      cout << p.top().second.first << " " << p.top().second.second << "\n";
      p.pop();
    }
     return ;
}

int main(){

    int size;
    cin >> size;
    vector<pair<int,int>> arr(0);
    for(int i=0; i<size; i++){
        int first , second;
        cin >> first >> second;
        arr.push_back({first , second});
    }
    cout << "Pair Of vector is \n";
    for(int i=0; i<arr.size(); i++){
        cout << arr[i].first << " " << arr[i].second << "\n";
    }
    int k;
    cin >> k;
    kClosestPointToOrigin(arr , k);
    return 0;
}