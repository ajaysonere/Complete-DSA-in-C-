#include<iostream>
using namespace std;

int main ()
{
 int size;
 cin >> size;
 int arr[size];
 for(int i=0;i<size;i++){
    cin >> arr[i];
 }
 int currentSum =0;
 int largestSum =0;
 for(int i=0;i<size;i++){
    currentSum += arr[i];
    if(currentSum <0){
        currentSum =0;
    }
    largestSum = max(largestSum , currentSum);
 }

 cout << "The largest Sum is :" << largestSum << "\n";
 
return 0;
}