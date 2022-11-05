#include<iostream>
using namespace std;
void insertionSort(int arr[],int size){
    for(int i=1;i<size;i++){
        int current = arr[i];
        int prev = i-1;
        while(prev >=0 and arr[prev]>current){
            arr[prev+1] = arr[prev];
            prev--;
        }
        arr[prev+1]= current;
    }
    cout << "1";
}
int main ()
{
 int size;
 cin >> size;

 int arr[size];
 for(int i=0;i<size;i++){
    cin >> arr[i];
 }
 cout << "Before The Insertion Sort :" << "\n";
 for(int i=0;i<size;i++){
    cout << arr[i] << " ";
 }
 cout << "\n";
 insertionSort(arr,size);
 cout << "After the insertion Sort :" <<  "\n";
 for(int x:arr){
    cout << x << " ";
 }
 cout << "\n"; 
 return 0;
}