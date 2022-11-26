#include<iostream>
#include<vector>
using namespace std;
void rotateArrayByK(int arr[],int size,int k){
    int ans[size]={0};
    int index =0;
    for(int i=k+1;i<size;i++){
        ans[index]=arr[i];
        index++;
    }
    for(int i=0;i<=k;i++){
      ans[index] = arr[i];
      index++;
    }
    cout << "Return By Array :" ;
    for(int i=0;i<size;i++){
        cout << ans[i] << " ";
    }
    cout << "\n";
}
void reverse(vector<int> &a,int start,int end){
    while(start<end){
       int temp = a[start];
       a[start] = a[end];
       a[end] = temp;
       start++;
       end--;
    }
}
vector<int>  rotateVectorKtimes(vector<int> a,int k){
    int n = a.size();
    k = k%n;

    if(k<0){
        k += n;
    }
    reverse(a,0,n-1);
    reverse(a,0,k-1);
    reverse(a,k,n-1);
    return a;
}



int main ()
{
    int size;
cin >> size;
 int arr[size];
 for(int i=0;i<size;i++){
    cin >> arr[i];
 }
 int k;
 cin>> k;
 rotateArrayByK(arr,size,k);

// Time complexity will be O(n)
 vector<int> v;
 for(int i=0;i<size;i++){
    v.push_back(arr[i]);
 }
 vector<int> ans =  rotateVectorKtimes(v,k);
 cout << "Return By Vector :";
 for(int i=0;i<size;i++){
    cout << ans[i] << " ";
 }
cout << "\n";

 return 0;
}