#include<iostream>
#include<vector>
#include<iterator>
using namespace std;
// Bubble Sort 
void bubbleSort(int arr[],int size){
   for(int i=0; i<size-1; i++){
    for(int j=0; j<size-i-1; j++){
       if(arr[j]>arr[j+1]){
          int temp = arr[j];
          arr[j] = arr[j+1];
          arr[j+1] = temp;
       }
    }
   }
}

// Insertion Sort 

void insertionSort(int arr[],int size){
    for(int pos=1; pos<size; pos++){
        int current = arr[pos];
        int prev = pos-1;
        while(prev >= 0 && arr[prev] > current){
            arr[prev+1] = arr[prev];
            prev = prev -1;
        }
        arr[prev+1] = current;
    }
}

// selection Sort 

void selectionSort(int arr[],int size){
    for(int i=0;i<size-1;i++){
        int minPosition = i;
        for(int j = i+1; j<size;j++){
            if(arr[j]<arr[minPosition]){
                minPosition = j;
            }
        }
        swap(arr[i],arr[minPosition]);
    }
}

// Counting Sort 

void countSort(int arr[],int size){
    int largest = -1;
    for(int i=0;i<size;i++){
        if(largest <arr[i]){
            largest = arr[i];
        }
    }

    vector<int> freq(largest+1,0);
    for(int i=0;i<size;i++){
        freq[arr[i]]++;
    } 
    int j=0;
    for(int i=0;i<=largest;i++){
       while(freq[i]>0){
        arr[j] = i; 
        freq[i]--;
        j++;
       }
    }
}


void printArray(int arr[],int size){
   for(int i=0;i<size;i++){
    cout << arr[i] << " ";
   }
   cout << "\n";
}

int main ()
{
int size;
cin >> size;
int arr[size];
for(int i=0;i<size;i++){
    cin >> arr[i];
}

cout << "unSorted Array is : " ;
printArray(arr,size);

// bubble sort 
// cout << " Bubble Sort sorted Array is : ";
// bubbleSort(arr,size);
// printArray(arr,size);

// Insertion Sort 
// cout << "Insertion Sort " ;
// insertionSort(arr,size);
// printArray(arr,size);

// Selection Sort 
// cout << "Selection Sort : ";
// selectionSort(arr,size);
// printArray(arr,size);


// Counting Sort 

cout << "Count Sort :" ;
countSort(arr,size);
printArray(arr,size);

return 0;
}