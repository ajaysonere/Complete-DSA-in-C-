#include<iostream>
#include<vector>
#include<queue>
using namespace std;

int smallestElement(vector<int> arr , int k1){
    priority_queue<int> p;
    for(int i=0; i<arr.size(); i++){
        p.push(arr[i]);
        if(p.size()>k1){
            p.pop();
        }
    }
    return p.top();
}

int sumOfSmallestElementBetweenK1AndK2(vector<int> arr, int k1, int k2){
    int kThSmallestElement = smallestElement(arr,k1);
    int kThSmallestElement2 = smallestElement(arr, k2);
    int sum =0;
    for(int i=0; i<arr.size(); i++){
        if(arr[i] > kThSmallestElement && arr[i] < kThSmallestElement2){
          sum +=arr[i];
        }
    }
    return sum;
}

int main ()
{
    int size;
    cin >> size;
    vector<int> arr(size);
    for(int i=0; i<arr.size(); i++){
        cin >> arr[i];
    }
    int k1,k2;
    cin >> k1 >> k2;
    int ans = sumOfSmallestElementBetweenK1AndK2(arr,k1,k2);
    cout << "Sum of the Element is " << ans << "\n";
    return 0;
}