#include<iostream>
#include<climits>
using namespace std;
int maxi (int arr[],int size){
    int Max = INT_MIN;
    for(int i=0;i<size;i++){
        if(Max < arr[i]){
            Max = arr[i];
        }
    }
  return Max;
}
int mini(int arr[],int size){
    int Mini = INT_MAX;
    for(int i=0;i<size;i++){
        if(Mini > arr[i]){
            Mini = arr[i];
        }
    }
    return Mini;
}
int main ()
{
int size;
cin >> size;
int arr[size];
for(int i=0;i<size;i++){
    cin >> arr[i];
}
int max = maxi(arr,size);
cout << "Max element is :" << max << "\n";
int min = mini(arr,size);
cout << "Mini element is :" << min << "\n";
return 0;
}