#include<iostream>
#include<vector>
using namespace std;

int main ()
{
    int row,col;
    cin >> row >> col;
    vector<vector<int>>arr;

    for(int i=0; i<row;i++){
        vector<int> temp;
        for(int i=0; i<col; i++){
           cin >> temp[i];
        }
        arr.push_back(temp);
    }
    
    return 0;
}