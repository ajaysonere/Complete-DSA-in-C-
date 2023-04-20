#include<iostream>
#include<vector>
#include<queue>
using namespace std;

vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
    // your code goes here 
    vector<int> ans;
    priority_queue<pair<int,int>> p;
    
    for(int i=0; i<mat.size(); i++){
        int sum = 0;
        for(int j=0; j<mat[i].size(); i++){
            sum += mat[i][j];
        }
        p.push({sum , i});
        if(p.size()>k){
            p.pop();
        }
    }
    
    while(!p.empty()){
        ans.push_back(p.top().second);
        p.pop();
    }
    
    return ans;
}

int main ()
{
    int row,col;
    cin >> row >> col;
    vector<vector<int>>arr;

    for(int i=0; i<row;i++){
        vector<int> temp;
        for(int i=0; i<col; i++){
           int value;
           cin >> value;
           temp.push_back(value);
        }
        arr.push_back(temp);
    }

    // printing the vector
    cout << "Our Vector is " << "\n";
    for(int i=0; i<arr.size(); i++){
        for(int j=0; j<arr[i].size(); j++){
            cout << arr[i][j] << " ";
        }
        cout <<"\n";
    }

    int k;
    cin >> k;

    vector<int> ans = kWeakestRows(arr,k);
    for(int i=0; i<ans.size(); i++){
        cout<< ans[i] << " ";
    }

    return 0;
}