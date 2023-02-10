#include <iostream>
using namespace std;

// when pivot is first element
int partition(int arr[], int start, int end)
{
    int pivot = arr[start];
    int count = 0;

    // count for putting the element in right index
    for (int i = start + 1; i <= end; i++)
    {
        if (arr[i] <= pivot)
        {
            count++;
        }
    }
    int pivotIndex = start + count;
    // swapping the piovt element to right element
    swap(arr[pivotIndex], arr[start]);

    int startPointer = start;
    int endPointer = end;

    while (startPointer < pivotIndex && endPointer > pivotIndex)
    {
        while (arr[startPointer] <= pivot)
        {
            startPointer++;
        }
        while (arr[endPointer] > pivot )
        {
            endPointer--;
        }
        if (startPointer < pivotIndex && endPointer > pivotIndex)
        {
            swap(arr[startPointer++], arr[endPointer--]);
        }
    }

    return pivotIndex;
}

void quickSort(int arr[], int start, int end)
{
    if (start >= end)
    {
        return;
    }
    int p = partition(arr, start, end);
    quickSort(arr, start, p - 1);
    quickSort(arr, p + 1, end);
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
    quickSort(arr, 0, size - 1);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";
    return 0;
}