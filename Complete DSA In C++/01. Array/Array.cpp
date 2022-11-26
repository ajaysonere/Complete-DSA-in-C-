#include<iostream>
using namespace std;

int main ()
{
  int size;
  cin >> size;
  int arr[size];
  for(int i=0;i<size;i++){
    cin >> arr[i];
  }
  // print the array
  for(int i=0;i<size;i++){
    cout << arr[i] << " ";
  }
  cout << "\n";
  return 0;
}