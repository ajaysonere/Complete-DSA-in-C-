#include<iostream>
using namespace std;

int main ()
{
//  cout << "2D Array";
   cout << "Enter the Number of the Row And Column \n";
   int row , column;
   cin >> row >> column;
   // Declaring a Two D array
   int arr[row][column];
   // Taking input in Two D array    
   for(int i=0;i<row;i++){
      for(int j=0;j<column;j++){
         cin >> arr[i][j];
      }
   }

   // Printing the Two D array  
   for(int i=0;i<row;i++){
       for(int j=0;j<column;j++){
            cout << arr[i][j] << " ";
        }
       cout << "\n";
   }

 return 0;
}