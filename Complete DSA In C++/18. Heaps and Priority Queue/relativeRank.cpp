#include<iostream>
#include<vector>
#include<queue>
#include<string>
#include<algorithm>
using namespace std;

vector<string> relativeRanks(vector<int>arr){
    priority_queue<pair<int,int>> p;

    for(int i=0;i<arr.size();i++){
        p.push({arr[i],i+1});
    }
    vector<string> ans(arr.size());

    ans[p.top().second-1] = "Gold Medal";
    p.pop();
    ans[p.top().second-1] = "Silver Medal";
    p.pop();
    ans[p.top().second-1] = "Bronze Medal";
    p.pop();
    int k=3;
    while(!p.empty()){
        k++;
        string ansH = to_string(k);
        ans[p.top().second-1] = ansH;
        p.pop();
    }
    return ans;

}

int main ()
{
    int size;
    cin >> size;
    vector<int> arr(size);

    for(int i=0; i<size;i++){
        cin >> arr[i];
    }
    
    vector<string>ans = relativeRanks(arr);
    for(int i=0; i<ans.size(); i++){
        cout << ans[i] << " ";
    }
    return 0;
}