#include<iostream>
using namespace std;

int main ()
{
    // cout << "2 D Dynamic Array :" << "\n";
    int rows, cols;
    cin >> rows >> cols;
    int ** arr = new int*[rows];

    for(int i=0;i<rows;i++){
        arr[i] = new int[cols];
        for(int j=0;j<cols;j++){
            cin>> arr[i][j];
        }
    }
    
    // 2D array will be 

    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cout << arr[i][j] <<  " ";
        }
        cout <<"\n";
    }


    // deallocate the memeory

    for(int i=0;i<rows;i++){
        delete [] arr[i];
    }
    delete [] arr;
    return 0;
}