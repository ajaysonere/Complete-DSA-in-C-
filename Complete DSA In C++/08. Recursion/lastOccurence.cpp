#include<iostream>
using namespace std;

int lastOccurence(int *arr, int n, int key){
    // base case
    if(n==0){
        return -1;
    }
    int subIndex = lastOccurence(arr+1, n-1, key);
    if(subIndex == -1){
        if(arr[0] == key){
            return 0;
        }else{
            return -1;
        }
    }else{
        return subIndex+1;
    }
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
    int ans = lastOccurence(arr,n,key);
    cout << ans << "\n";
    return 0;
}