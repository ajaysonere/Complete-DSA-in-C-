#include<iostream>
using namespace std;

int circularTour( pair<int ,int>arr[] ,int size){
    int deficiet = 0;
    int balance = 0;
    int start = 0;
    for(int i=0; i<size; i++){
        balance += arr[i].first - arr[i].second;
        if(balance < 0){
            deficiet += balance;
            start = i+1;
            balance = 0;
        }
    }

    if(deficiet + balance >= 0){
        return start;
    }else{
        return -1;
    }
}

int main ()
{
    int size;
    cin >> size;
    pair<int ,int> arr[size];

    for(int i=0; i<size; i++){
        cin >> arr[i].first >> arr[i].second;
    }

    int ans = circularTour(arr , size);
    cout << "Circular Tour is start at Index " << ans << "\n";

    return 0;
}