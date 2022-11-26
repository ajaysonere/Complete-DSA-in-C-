#include<iostream>
using namespace std;
void printsubarray(int arr[],int size){
  for(int i=0;i<size;i++){
    for(int j=i;j<size;j++){
        for(int k=i;k<=j;k++){
            cout << arr[k] << " ";
        }
        cout << "\n";
    }
  }
}

int main ()
{
 int size;
 cin >> size;
 int arr[size];
 for(int i=0;i<size;i++){
    cin >>arr[i];
 }
 printsubarray(arr,size);
 return 0;
}