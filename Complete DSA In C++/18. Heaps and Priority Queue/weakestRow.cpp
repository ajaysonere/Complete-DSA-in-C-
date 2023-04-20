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
    return 0;
}