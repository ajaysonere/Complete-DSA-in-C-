#include<iostream>
#include<vector>
using namespace std;

int main ()
{
    cout << "2 D Vector " << "\n";
    int rows , cols;
    cin >> rows >> cols;

    vector< vector<int>> arr;

    // taking user input 
    for(int i=0;i<rows;i++){
        vector<int>temp;
        int value;
        for(int j=0;j<cols;j++){
            cin >> value;
            temp.push_back(value);
        }
        arr.push_back(temp);
    }


    // accessing the elements 
    for(int i=0;i<arr.size();i++){
        for( auto x : arr[i]){
            cout << x << " ";
        }
        cout << '\n';
    }

    for(int i=0; i<arr.size();i++){
        for(int j=0; j<arr[i].size();j++){
            cout << arr[i][j] << " ";
        }
        cout <<"\n";
    }
    return 0;
}