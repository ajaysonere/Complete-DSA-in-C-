#include<iostream>
#include<vector>
using namespace std;

void printVector(vector<int> vec , int n){
    for(int i=0; i<n; i++){
        cout << vec[i] << " ";
    }
    cout << "\n";
}

void fillVec(vector<int> &vec, int i, int n, int val){
    if(i==n){
        printVector(vec ,n);
        return;
    }
    vec[i] = val;
    fillVec(vec , i+1, n , val+1);
    // backtracking code
    vec[i] = -1*vec[i];
}

int main(){
    vector<int> vec(100,0);
    int n;
    cin >> n;
    fillVec(vec , 0, n , 1);
    printVector(vec , n);
    return 0;
}