#include <iostream>
#include <vector>
using namespace std;
void countSort(int arr[], int size)
{
    int largest = 0;
    for (int i = 0; i < size; i++)
    {
        largest = max(largest, arr[i]);
    }
    cout << largest << "\n";
    vector<int> freq(largest + 1, 0);
    for (int i = 0; i < size; i++)
    {
        freq[arr[i]]++;
    }
    int j = 0;
    for (int i = 0; i <= largest; i++)
    {
        while (freq[i] > 0)
        {
            arr[j] = i;
            freq[i]--;
            j++;
        }
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
    cout << "Before the countSort :"
         << "\n";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    countSort(arr, size);
    cout << "After the countSort :"
         << " \n";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}