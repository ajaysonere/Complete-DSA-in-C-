#include<iostream>
using namespace std;
void printArr(int *arr ,int row,int column){
    for(int i=0;i<row;i++){
      for(int j=0;j<column;j++){
         cout << *(arr+i*column+j) << " ";
      }
      cout << "\n";
    }
}

int main ()
{
   cout << "Enter the Number of Row And Columns " << "\n";
   int row ,column;
   cin >> row >> column;
   int arr[row][column];
   for(int i=0;i<row;i++){
     for(int j=0;j<column;j++){
         cin >> arr[i][j];
     }
   }

   cout << "2 D Array is :" << "\n";
  //  for(int i=0;i<row;i++){
  //     for(int j=0;j<column;j++){
  //         cout << arr[i][j] << " ";
  //     }
  //     cout << "\n";
  //  }

  printArr((int*)arr,row,column);
  return 0;
}