#include<iostream>
using namespace std;
void printpair(int arr[],int size){
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            cout << arr[i] << " " << arr[j] << "\n";
        }
        cout << "\n";
    }
}
int main ()
{
 int size;
 cin >> size;
 int arr[size];
 for(int i=0;i<size;i++){
    cin >> arr[i];
 }
 printpair(arr,size);
return 0;
}