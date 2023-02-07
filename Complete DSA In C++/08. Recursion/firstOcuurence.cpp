#include<iostream>
using namespace std;

int firstOccurence(int arr[], int i, int n, int key){
    
    if(arr[i] == key){
        return i;
    }
    if(i == n-1){
        return -1;
    }
    firstOccurence(arr, i+1, n, key);
}


int firstOccurence(int arr[], int n, int key){
    if(n==0){
        return -1;
    }

    if(arr[0] == key){
        return 0;
    }
    int subIndex = firstOccurence(arr+1, n-1, key);
    if(subIndex == -1){
        return -1;
    }else{
        return subIndex+1;
    }
}

int main ()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n; i++){
        cin >> arr[i];
    }
    int key;
    cin >> key;
    int ans = firstOccurence(arr,n,key);
    if(ans == -1){
        cout << "Element is not Present "<< "\n";
    }else{
        cout << "Element is present at index " << ans << "\n";
    }
    return 0;
}