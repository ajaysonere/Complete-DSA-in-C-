#include<iostream>
#include<algorithm>
using namespace std;


// naive approach
int kthSmallest(int arr[], int size,int k){
    sort(arr,arr+size);
    k--;
    return arr[k];
}

int main ()
{
    int size;
    cin >> size;
    int arr[size];
    for(int i=0; i<size; i++){
        cin >> arr[i];
    }
    int k;
    cin >> k;
    int ans = kthSmallest(arr,size,k);
    cout << "Kth Smallest " << ans << "\n";
    return 0;
}