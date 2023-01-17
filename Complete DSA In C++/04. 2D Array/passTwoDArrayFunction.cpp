#include<iostream>
using namespace std;

// number of rows and column 
const int row = 3;
const int column = 3;

void printArray(int arr[row][column]){
    cout << "The Array Will Be :" << "\n";
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            cout << arr[i][j] << " ";
        }
        cout <<"\n";
    }
}

int main ()
{
    cout << "Passing Two 2D Array As a Argument " << "\n";
    int arr[row][column];
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            cin >> arr[i][j];
        }
    }
    printArray(arr);

    return 0;
}