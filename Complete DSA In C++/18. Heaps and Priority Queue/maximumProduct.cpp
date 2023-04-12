#include <iostream>
using namespace std;

void heapify(int arr[], int size, int i)
{
    int largest = i;
    int leftChild = 2 * i;
    int rightChild = 2 * i + 1;

    if (leftChild <= size && arr[largest] < arr[leftChild])
    {
        largest = leftChild;
    }
    if (rightChild <= size && arr[largest] < arr[rightChild])
    {
        largest = rightChild;
    }

    if (largest != i)
    {
        swap(arr[largest], arr[i]);
        heapify(arr, size, largest);
    }
}

int secondApproach(int arr[], int size){
    sort(arr , arr+size);
    int i = size;
    int j = size-1;
    return ((arr[i]-1)*(arr[j]-1));
}


int main()
{

    int size;
    cin >> size;
    int arr[size];
    for (int i = 1; i <= size; i++)
    {
        cin >> arr[i];
    }

    for (int i = size/2; i > 0; i--)
    {
        heapify(arr, size, i);
    }

    cout << "After the heapifing " << "\n";

    for (int i = 1; i <= size; i++)
    {
        cout << arr[i] << " ";
    }

    int leftChild = 2*1;
    int rightChild = 2*1+1;
    int secondLast = max(arr[leftChild] , arr[rightChild]);
    int maxElement = arr[1];
    cout << "\n" << ((maxElement-1)*(secondLast-1)) << "\n";
    return 0;
}