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
    int ans = firstOccurence(arr,0,n,key);
    if(ans == -1){
        cout << "Element is not Present "<< "\n";
    }else{
        cout << "Element is present at index " << ans << "\n";
    }
    return 0;
}