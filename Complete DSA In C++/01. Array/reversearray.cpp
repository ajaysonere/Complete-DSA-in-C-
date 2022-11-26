#include<iostream>
using namespace std;
void reverse(int arr[],int size){
    int start =0;
    int end = size-1;
    while(start<end){
        swap(arr[start],arr[end]);
        start++;
        end--;
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
cout << "----- Before the reverse function--------" << "\n";
for(int i=0;i<size;i++){
    cout << arr[i] << " ";
}
cout << "\n";
 reverse(arr,size);
cout << "----- After the reverse function--------"<<"\n";
for(int i=0;i<size;i++){
    cout << arr[i] << " ";
}
return 0;
}