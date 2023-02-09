#include<iostream>
using namespace std;

// void bubbleSortRec(int arr[], int n){
//     if(n==1){
//         return;
//     }
//     for(int j=0; j<n-1; j++){
//         if(arr[j] > arr[j+1]){
//             int temp = arr[j];
//             arr[j] = arr[j+1];
//             arr[j+1] = temp;

//         }
//     }
//     bubbleSortRec(arr, n-1);
// }

void bubbleSortRec(int arr[] ,int n ,int j){
    if(n==1){
        return;
    }
    if(j==n-1){
        bubbleSortRec(arr, n-1, 0);
        return;
    }
    if(arr[j] > arr[j+1]){
        int temp = arr[j];
        arr[j] = arr[j+1];
        arr[j+1] = temp;
    }
    bubbleSortRec(arr, n ,j+1);
}

int main()
{
    int n;
    cin >> n;

    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    bubbleSortRec(arr, n,0);
    // print the array in sorted array using the bubble sort 
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}