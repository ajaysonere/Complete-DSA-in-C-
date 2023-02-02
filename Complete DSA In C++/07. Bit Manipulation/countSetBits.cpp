#include<iostream>
using namespace std;
int countSetBits(int n){
    int count =0;
    while(n>0){
        int lastBit = (n&1);
        count += lastBit;
        n = n>>1;
    }
    return count;
}
int main ()
{
    int n;
    cin >> n;
    // print the number of set Bits 
    cout << countSetBits(n) << "\n"; 
    return 0;
}