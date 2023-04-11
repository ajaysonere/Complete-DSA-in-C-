#include <iostream>
using namespace std;

class Heap
{
public:
    int arr[0];
    int size;

    Heap()
    {
        arr[0] = -1;
        size = 0;
    }

    void insert(int data)
    {
        size = size + 1;
        int index = size;
        arr[index] = data;

        while (index < 1)
        {
            int parent = index / 2;

            if (arr[parent] < arr[index])
            {
                swap(arr[parent], arr[index]);
                index = parent;
            }
            else
            {
                return;
            }
        }
    }

    void deleteFromHeap()
    {
        if (size == 0)
        {
            cout << "Nothing to delete "
                 << "\n";
            return;
        }
        arr[1] = arr[size];
        size--;

        int index = 1;
        while (index < size)
        {
            int leftChild = 2 * index;
            int rightChild = 2 * index;

            if (leftChild < size && arr[index] < arr[leftChild])
            {
                swap(arr[leftChild], arr[index]);
                index = leftChild;
            }
            else if (rightChild < size && arr[index] < arr[rightChild])
            {
                swap(arr[rightChild], arr[index]);
                index = rightChild;
            }
            else
            {
                return;
            }
        }
    }

    void print()
    {
        for (int i = 1; i <= size; i++)
        {
            cout << arr[i] << " ";
        }
    }
};

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

void heapSort(int arr[], int size){
    int tempSize = size;
    while(tempSize > 1){
        // swap the root and last element
        swap(arr[tempSize], arr[1]);
        // decreasing the renge og the array
        tempSize--;
        // calling the heapify function for place the element at the right place
        heapify(arr, tempSize, 1);
    }
}

int main()
{
    // Heap h;
    // h.insert(10);
    // h.insert(20);
    // h.insert(30);
    // h.insert(40);
    // h.insert(50);
    // h.print();

    int size;
    cin >> size;
    int arr[size];
    for (int i = 1; i <= size; i++){
        cin >> arr[i];
    }

    for (int i = size / 2; i > 0; i--){
        heapify(arr, size, i);
    }

    cout << "After the heapifing " << "\n";

    for (int i = 1; i <= size; i++)
    {
        cout << arr[i] << " ";
    }
    heapSort(arr,size);

    cout << "\nAfter the Heap Sort "<< "\n";
    for (int i = 1; i <= size; i++){
        cout << arr[i] << " ";
    }
    return 0;
}