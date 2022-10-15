#include<iostream>
using namespace std;
void subArraySum(int arr[],int size){
    int maxi =0;
  for(int i=0;i<size;i++){
    for(int j=i;j<size;j++){
        int currentSum =0;
        for(int k=i;k<=j;k++){
            currentSum += arr[k];
        }
        cout << currentSum << " \n";
        maxi = max(currentSum, maxi);
    }
  }
  cout << "Maximum Sub array is :" << maxi << "\n"; 
}
int main ()
{
 int size;
 cin >> size;
 int arr[size];
 for(int i=0;i<size;i++){
    cin >> arr[i];
 }
 subArraySum(arr,size);
 return 0;
}