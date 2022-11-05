#include<iostream>
using namespace std;

// Here Time Complexity is O(n^2) and in each time it will take order of n^2 Time.Even if Array is sorted.

void bubbleSort(int arr[],int size){
    for(int i=0;i<size-1;i++){
        for(int j=0;j<size-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j]= arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

// Optimisized Bubble Sort , If array is already sorted then it will only take order of n^2 time.

void bubbleSortO1(int arr[],int size){
    for(int i=0;i<size-1;i++){
        int flag = 0;
        for(int j=0;j<size-i-1;j++){
            if(arr[j]>arr[j+1]){
                flag =1;
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
        if(flag == 0){
            cout << "Array is Already Sorted :" << "\n";
            break;
        }
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

 bubbleSortO1(arr,size);
 for(int i=0;i<size;i++){
    cout << arr[i] << " ";
 }
 cout <<"\n";

 bubbleSort(arr,size);
 for(int x : arr){
    cout << x << " ";
 }

 return 0;
}