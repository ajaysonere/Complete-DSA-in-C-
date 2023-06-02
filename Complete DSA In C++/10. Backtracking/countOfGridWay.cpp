#include<iostream>
using namespace std;

int gridWay(int i, int j, int m, int n){
    // re
    if(i==m-1 && j == n-1){
        return 1;
    }
    if(i >= m || j >= n){
        return 0;
    }
    int ans = gridWay(i+1 , j , m , n)+ gridWay(i , j+1 , m , n);
    return ans;
}

int main(){
    int m,n;
    cin >> m >> n;
    cout << "Count of way to reach left-right cornor " << gridWay(0,0,m,n) << "\n";
    return 0;
}