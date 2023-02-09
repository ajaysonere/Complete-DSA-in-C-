#include<iostream>
#include<vector>

using namespace std;

void merge(vector<int> &arr, int s, int e){
    int i = s;
    int mid = ((s+e)/2);
    int j = mid+1;

    vector<int> temp;
    
    while( i <= mid && j <= e ){
        if(arr[i]<arr[j]){
            temp.push_back(arr[i]);
            i++;
        }else{
            temp.push_back(arr[j]);
            j++;
        }
    }

    while(i<=mid){
        temp.push_back(arr[i]);
        i++;
    }

    while( j<=e){
        temp.push_back(arr[j]);
        j++;
    }
    
    int k=0;
    for(int d=s; d<=e; d++){
        arr[d] = temp[k];
        k++;
    }
}

void mergeSort(vector<int> &arr, int s ,int e){
    if(s>=e){
        return;
    }
    int mid  = ((s+e)/2);
    mergeSort(arr,s,mid);
    mergeSort(arr,mid+1,e);
    merge(arr,s,e);
}

int main(){
    
    int size;
    cin >> size;

    vector<int> arr(size);
    for(int i=0; i<size; i++){
        cin >> arr[i];
    }

    mergeSort(arr,0,size-1);
    for(int i=0; i<size; i++){
        cout << arr[i] << " ";
    }
    cout << "\n";

    return 0;
}