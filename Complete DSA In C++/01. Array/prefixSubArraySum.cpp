#include<iostream>
using namespace std;
int prefixSubArraySum(int arr[],int size){
    int prefix[size] = {0};
    prefix[0] = arr[0];
    for(int i=1;i<size;i++){
        prefix[i] = prefix[i-1]+arr[i];
    }
    int largestSubArraySum =0;
    for(int i=0;i<size;i++){
        int subArraySum =0;
        for(int j=i;j<size;j++){
         subArraySum = i>0 ? prefix[j]-prefix[i-1] : prefix[j];
        }
        largestSubArraySum = max(largestSubArraySum,subArraySum);
    }
    return largestSubArraySum;
}
int main ()
{
 int size;
 cin >> size;
 int arr[size];
 for(int i=0;i<size;i++){
    cin >> arr[i];
 }
 cout << prefixSubArraySum(arr,size) << "\n";
 return 0;
}