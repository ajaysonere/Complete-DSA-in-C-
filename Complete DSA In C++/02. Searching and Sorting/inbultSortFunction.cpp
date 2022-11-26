#include<iostream>
#include<algorithm>
using namespace std; 

int main ()
{
 int arr[]= {10,5 ,-5,-8, 45 ,62, 3, 55 };
 int size = sizeof(arr)/sizeof(int);
 cout << size << " \n";
 sort(arr,arr+size);
 for(int x : arr){
    cout << x << " ";
 }
 cout << "\n";
 sort(arr,arr+size,greater<int>());
 for(int x : arr){
    cout << x << " ";
 }
 cout << "\n";
 return 0;
}