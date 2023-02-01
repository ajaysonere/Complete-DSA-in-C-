#include<iostream>
using namespace std;

void clearBitsInRange(int &n,int i,int j){
    int a = (~0)<<(j+1);
    int b = (1<<i)-1;
    int mask = a|b;
    n = n&mask;
}

void replaceBits(int &n , int i, int j, int m){
    clearBitsInRange(n,i,j); 
    int replaceMask = (m<<i);
    n =  n | replaceMask;
}

int main ()
{
    // int n;
    // cin >> n;
    // int i,j;
    // cin >> i,j;
    // int m;
    // cin >> m;
    int n =15;
    replaceBits(n,1,3,2);

    cout << n << "\n";
    return 0;
}