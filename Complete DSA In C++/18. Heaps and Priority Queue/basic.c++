#include<iostream>
using namespace std;

class Heap{
    public:
    int arr[100];
    int size;

    Heap(){
        arr[0] = -1;
        size = 0;
    }
    void insert(int data){
        size = size +1;
        int index = size;
        arr[index] = data;

        while(index > 1){
            int parent = index/2;
            if(arr[parent] < arr[index]){
                swap(arr[parent] , arr[index]);
                index = parent;
            }else{
                return ;
            }
        }
    }

    void deleteFromHeap(){
        // if array is empty
        if(size == 0){
           cout << "Nothing to delete " << "\n";
           return ;
       }
        // put the last element to the first / root element and decrease the size 
        arr[1] = arr[size];
        size--;

        // put all the element to the right place
        int index = 1;
        while(index < size){
            int leftChild = 2*index;
            int rightChild = 2*index+1;
            
            if(leftChild < size && arr[index] < arr[leftChild]){
                swap(arr[index] , arr[leftChild]);
                index = leftChild;
            }else if(rightChild < size && arr[index] < arr[rightChild]){
                swap(arr[index] , arr[rightChild]);
                index = rightChild;
            }else{
                return;
            }
        }
    }

    void print(){
        for(int i=1; i<= size; i++){
            cout << arr[i] << " ";
        }
    }
};

int main ()
{
//  cout << "Heaps And Priority Queue";
    Heap h;
    h.insert(10);
    h.insert(20);
    h.insert(30);
    h.insert(40);
    h.insert(50);
    h.print();
    cout << "\n";
    h.deleteFromHeap();
    h.print();
    return 0;
}