#include<iostream>
using namespace std;

int partition(int *arr, int start , int end){
    int pivot = arr[end];
    int i = start-1;
    for(int j=start; j<end; j++){
        if(arr[j] < pivot){
            i++;
            swap(arr[j],arr[i]);
        }
    }
    swap(arr[i+1],arr[end]);
    return i+1;
}

void quickSort(int *arr , int start , int end){
    if(start >= end){
        return;
    }
    int pivotIndex = partition(arr,start ,end);
    quickSort(arr,start,pivotIndex-1);
    quickSort(arr,pivotIndex+1,end);
}

int main ()
{
    int size;
    cin >> size;
    int arr[size];
    for(int i=0; i<size; i++){
        cin >> arr[i];
    }
    quickSort(arr,0,size-1);
    for(int x : arr){
       cout << x << " ";
    }
    cout << "\n";
    return 0;
}