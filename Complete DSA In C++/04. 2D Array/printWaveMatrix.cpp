#include<iostream>
using namespace std;

int main(){

    cout << "Enter the Number of Rows  and Columns " << "\n";
    int row , col;
    cin >> row >> col;
    int arr[row][col];
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin >> arr[i][j];
        }
    }

    cout <<" Output is :" << "\n";

    // Print Start to End 
    
    //  int end = col;
    //  int endCol = col-1;
    //  while(start <= endCol)
    //  int index = 0;
    //  for(index; index<col; index++){
    //     cout << arr[index][endCol] << " ";
    //  }
    //  index = index-1;
    //  endCol = endCol-1;
    //  for(index; index >=0;index--){
    //     cout << arr[index][endCol] << " ";
    //  }
    //  index +=1;
    //  endCol = endCol-1;
    //  for(index;index<col;index++){
    //     cout << arr[index][endCol] << " ";
    //  }

    //  index = index-1;
    //  endCol = endCol-1;
    //  for(index;index >=0;index--){
    //     cout << arr[index][endCol] << " ";
    //  }

    //  cout << "\n";





    // int i=0;
    // for(i;i<4;i++){
    //     cout<< arr[i][3] << " ";
    // }
    // // cout << "i is " <<  i << "\n";
    // i=i-1;
    // for(i; i>=0; i--){
    //     cout << arr[i][2] << " ";
    // }
    // i=i+1;
    // for(i;i<4;i++){
    //     cout << arr[i][1] << " ";
    // }
    // i=i-1;
    // for(i;i>=0;i--){
    //     cout << arr[i][0] << " ";
    // }
    // // cout << "\n";

    // cout << "\n";


    return 0;
}