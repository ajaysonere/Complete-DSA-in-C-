#include<iostream>
using namespace std;

// bool isArraySorted(int arr[],int n){
//     if(n==0 || n==1){
//         return true;
//     }
//     if(arr[0] < arr[1] & isArraySorted(arr+1, n-1)){
//         return true;
//     }
//     return false;
// }

bool isArraySorted(int arr[],int i, int n){
    if(i == n-1){
        return true;
    }
    if(arr[i]<arr[i+1] && isArraySorted(arr,i+1,n)){
        return true;
    }
    return false;
}

int main ()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    if (isArraySorted(arr,0,n))
    {
        cout << "Array is Sorted " << "\n";
    }
    else
    {
        cout << "Array is not Sorted " << "\n";
    }
    return 0;
}