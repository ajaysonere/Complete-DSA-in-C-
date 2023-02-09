#include<iostream>
#include<vector>
using namespace std;

void allBinarySequence(int n , vector<int> &ans){
    if(n==0 || n==1){
       return n;
    }
    
}

vector<int> binaryString(int n){
    vector<int > ans;
    allBinarySequence(n,ans);
    return ans;
}


int main ()
{ 
    int n;
    cin >> n;

    vector<int> ans = binaryString(n);
    return 0;
}