#include<iostream>
using namespace std;

int main ()
{
    int size;
    cin >> size;

    // dynamic array 
    int *arr = new int [size];
    cout << arr << "\n";

    // taking input 
    for(int i=0;i<size;i++){
         cin >> *(arr+i); 
    }

    // print the array
    for(int i=0;i<size;i++){
        cout << arr[i] << " ";
    }
    cout <<"\n";
    
    for(int i=0;i<size;i++){
        cout << *(arr+i) << " ";
    }
    cout << "\n";

    delete [] arr;
    cout << arr << "\n";



    return 0;
}