#include<iostream>
using namespace std;

int rotateArraySearch(int arr[], int size, int key){
    int start = 0;
    int end = size-1;

    while(start <= end){
        int mid = (start+end)/2;
        if(arr[mid] == key){
            return mid;
        }
        if(arr[start] <= arr[mid]){
            // element will be in first half 
            if(key >= arr[start] && key <= arr[mid]){
                end = mid-1;
            }else{
                start = mid+1;
            }
        }else{
            if(key >= arr[mid] && key <= arr[end]){
                start = mid+1;
            }else{
                end = mid-1;
            }
        }
    }
    return -1;

}

int main ()
{
    int size;
    cin >> size;
    int arr[size];
    for(int i=0; i<size; i++){
        cin >> arr[i];
    }
    int key;
    cin >> key;
    int ans = rotateArraySearch(arr,size,key);
    cout << ans << " \n";
    return 0;
}