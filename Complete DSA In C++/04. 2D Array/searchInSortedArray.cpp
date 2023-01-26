#include<iostream>
using namespace std;


int main ()
{
  int row,col;
  cin >> row >> col;
  int arr[row][col];
  for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
        cin>> arr[i][j];
     }
  }
  int key;
  cin>> key;

  // Searching in sorted array
  // if element is not present in the array
  if(key <arr[0][0] || key > arr[row-1][col-1]){
      cout << "Key is not Present in Matrix "<< "\n";
      return 0;
  }

  int start = 0;
  int end = col-1;
  bool ans = false;
  while(start < row && end >=0){
      if(key == arr[start][end]){
        cout << "key is present at index - " << start << " " << end << "\n";
        ans = true;
        break;
      }else if(key < arr[start][end]){
          end--;
      }else{
        start++;
      }
  }
   
  if(!ans){
    cout << "Element is not present in matrix "<< "\n";
  }

  return 0;
}