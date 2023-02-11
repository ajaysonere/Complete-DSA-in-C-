#include<iostream>
using namespace std;

int binarySearch(int *arr ,int low , int high , int key){
    if(low > high ){
        return -1;
    }
    int mid = (low+high)/2;
    if(arr[mid]==key){
        return mid;
    }
    if(arr[mid] > key){
        return binarySearch(arr,low , mid-1,key);
    }
    return binarySearch(arr,mid+1,high,key);
}

int main ()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n;i++){
        cin >> arr[i];
    }
    int key;
    cin >> key;
    int res = binarySearch(arr,0,n,key);
    cout << res << "\n";
    return 0;
}