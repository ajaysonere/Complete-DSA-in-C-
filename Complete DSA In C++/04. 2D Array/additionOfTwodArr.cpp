#include<iostream>
using namespace std;

int main ()
{
    cout << "Enter the Number of Rows And Column " << "\n";
    int row,column;
    cin >> row >> column;
    // Declaring a Two D Array

    cout << "Enter the Element of the Arr 1 \n";
    int arr1[row][column];
    // Taking input in Two D array
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            cin >> arr1[i][j];
        }
    }

    cout << "Enter the Element of the Arr 2 \n";
    int arr2[row][column];
    // Taking input in Two D array
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            cin >> arr2[i][j];
        }
    }

    int sum[row][column];


    // Geting 2 D  array
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            sum[i][j] = arr1[i][j]+arr2[i][j];
        }
        cout << "\n";
    }

    cout << "Sum of the Two Arrays : \n";
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            cout << sum[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}