#include<iostream>
using namespace std;
void substractionOfArr(int *arr1,int *arr2, int *ans , int row,int column){
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            *(ans+i*column+j) = *(arr1+i*column+j)-*(arr2+i*column+j);
        }
    }
}

int main ()
{
    cout << "Enter the Number of Rows And Columns For Array" << "\n";
    int row,column;
    cin >> row >> column;

    cout << "Enter the Element of Array 1" << "\n";
    int arr1[row][column];
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            cin >> arr1[i][j];
        }
    }

    cout << "Enter the Element of Array 2" << "\n";
    int arr2[row][column];
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            cin >> arr2[i][j];
        }
    }

    int ans[row][column];
    substractionOfArr((int *)arr1,(int *)arr2,(int *)ans ,row,column);
    cout << "Substraction is : " << "\n";
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            cout << ans[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}