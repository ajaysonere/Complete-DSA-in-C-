#include<iostream>
#include<vector>
using namespace std;

void getResult(int k, vector<int> vec, vector<int> &ans , int index){
    
    // base case
    if(index == vec.size()){
        return;
    }
    if(vec[index] == k){
        ans.push_back(index);
    }
    getResult(k,vec,ans,index+1);
}

vector<int> findAllOccurence(int k,vector<int> vec){
   vector<int> ans;
   getResult(k, vec, ans , 0);
   return ans;
}

int main ()
{
    int n;
    cin >> n;
    vector<int> vec(n);
    for(int i=0; i<n; i++){
        cin >> vec[i];
    }
    int k;
    cin >> k;
    vector<int> ans = findAllOccurence(k,vec);
    for(int i=0;i<ans.size(); i++){
        cout << ans[i] << " ";
    }
    cout << "\n";
    return 0;
}