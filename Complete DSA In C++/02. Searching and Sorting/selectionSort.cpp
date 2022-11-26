#include<iostream>
using namespace std;

void selectionSort(int arr[],int size){
    for(int pos=0; pos<size-1; pos++){
        int minPosition = pos;
        for(int j=pos+1;j<size;j++){
            if(arr[j]<arr[minPosition]){
                minPosition = j;
            }
        }
        swap(arr[minPosition],arr[pos]);
    }
}
int main ()
{
 int size;
 cin >> size; 
 int arr[size];
 for(int i=0;i<size;i++){
    cin >> arr[i];
 }
 cout << "Before the Selection Sort :" << "\n";
 for(int i=0;i<size;i++){
    cout << arr[i]<< " ";
 }
 cout << "\n";
 selectionSort(arr,size);
 cout << "After the Selection Sort :" << "\n";
 for(int i=0;i<size;i++){
    cout << arr[i] << " ";
 }
 cout << "\n";
 return 0; 
}