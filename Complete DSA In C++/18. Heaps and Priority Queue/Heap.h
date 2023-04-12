#include<vector>

template<typename T>
class Heap{
    vector<T> v;

    void heapify(int i){
        int leftChild = 2*i;
        int rightChild = 2*i+1;
        int minIndex = i;
        if(leftChild < v.size() && v[leftChild] < v[minIndex]){
            minIndex = leftChild;
        }
        if(rightChild < v.size() && v[rightChild] < v[minIndex]){
            minIndex = rightChild;
        }

        if(minIndex != i){
            swap(v[minIndex], v[i]);
            heapify(minIndex);
        }
    }

    public:
    Heap(int defaultSize = 10){
        v.reserve(defaultSize+1);
        v.push_back(-1);
    }


    void push(T data){
        v.push_back(data);
        int index = v.size()-1;
        int parent = index/2;
        while(index >= 1 && v[index] < v[parent]){
            T temp = v[index];
            v[index] = v[parent];
            v[parent] = temp;
            index = parent;
            parent = index/2;
        }
    }

    T top(){
        if(v.size() == 0){
            return -1;
        }
        return v[1];
    }

    void deleteFromMinHeap(){
        // if vector is empty 
        if(v.size() == 0){
            return -1;
        }
        // swap the first and last element
        int index = v.size()-1;
        swap(v[1] , v[index]);
        v.pop_back();
        heapify(1);
    }
};