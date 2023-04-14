#include<iostream>
using namespace std;

// linear search program 

int linearSearch(int arr[], int size, int key){
    for(int i=0; i<size; i++){
        if(key == arr[i]){
            return i;
        }
    }
    return -1;
}

int main ()
{
    int size;
    cin >>size;
    int arr[size];
    for(int i=0; i<size; i++){
        cin >> arr[i];
    }
    int key;
    cin >> key;
    int ans = linearSearch(arr,size,key);
    if(ans == -1){
        cout << "Key is not present " << "\n";
    }else{
        cout << "Key is present at index " << ans << "\n";
    }
    return 0;
}