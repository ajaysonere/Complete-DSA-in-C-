#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>
using namespace std;

vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
    // geting the size of the  
    int col = mat[0].size();
    // pushing the last element in matrix it's index of the each row 
    for(int i=0; i<mat.size(); i++){
        mat[i].push_back(i);
    }
    // sort the matrix for getting the weakest row
    sort(mat.begin(),mat.end());
    // inserting all the weakest row in the ans vector
    vector<int>ans;
    for(int i=0; i<k;i++){
        ans.push_back(mat[i][col]);
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