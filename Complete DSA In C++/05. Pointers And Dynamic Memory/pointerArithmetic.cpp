#include<iostream>
using namespace std;

int main ()
{
    // int x  =10;
    // int *ptr = &x;
    // cout << ptr <<"\n";
    // ptr +=1;
    // cout << ptr <<"\n";

    int arr[] = {1,2,3};
    int *firstPtr = &arr[0];

    // cout << *firstPtr << "  " << &arr[0] << "\n";
    cout << firstPtr << "  " << *firstPtr << "\n";

    // *firstPtr++;

    // cout << *firstPtr++ << " " << *firstPtr++ << "\n";
    cout << ++*firstPtr << '\n';

    cout << *++firstPtr << '\n';


    for(int i=0;i<3;i++){
        cout << arr[i] << " ";
    }
    return 0;
}