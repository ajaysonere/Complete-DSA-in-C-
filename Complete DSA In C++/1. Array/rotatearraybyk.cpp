#include<iostream>
using namespace std;
void rotateArrayByK(int arr[],int size,int k){
    int ans[size]={0};
    int index =0;
    for(int i=k;i<size;i++){
        ans[index]=arr[i];
        index++;
    }
    for(int i=0;i<k;i++){
      ans[index] = arr[i];
      index++;
    }
    for(int i=0;i<size;i++){
        cout << ans[i] << " ";
    }
    cout << "\n";
}
int main ()
{int size;
cin >> size;
 int arr[size];
 for(int i=0;i<size;i++){
    cin >> arr[i];
 }
 int k;
 cin>> k;
 rotateArrayByK(arr,size,k);
 return 0;
}