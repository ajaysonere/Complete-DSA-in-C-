#include <iostream>
using namespace std;

// Insertion Sort Time completixy is O(n^2).

void insertionSort(int arr[], int size)
{
    cout << "Function is called :" <<size <<"\n";
    for (int i = 1; i < size; i++)
    {
        int current = arr[i]; // storing the sorted part of the array
        int prev = i - 1;     // iterate throgh the unsorted array

        // For put the element at the right position
        while (i >= 0 and arr[prev] > current)
        {
            arr[prev + 1] = arr[prev];
            prev = prev - 1;
            cout << "Inside loop :" << "\n";
        }
        arr[prev + 1] = current;
        cout << "1" << " ";
    }
    cout << "Insertion Sort :" << "\n";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int size;
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
     cout << "Insertion Sort :" << "\n";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    insertionSort(arr, size);
     
    cout << "\n";
    return 0;
}