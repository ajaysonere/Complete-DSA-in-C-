#include<iostream>
using namespace std;

// void printBinary(int n){
//     while(n>0){
//         cout << (n&1);
//         n = n>>1;
//     }
// }

int printBinary(int n){
    int ans = 0;
    int p=1;
    while(n>0){
        int lastBit = n&1;
        ans = ans+p*lastBit;
        p = p*10;
        n = n>>1;
    }
    return ans;
}

int printDecimal(int m){
    int ans = 0;
    while(m>0){
        int lastBit = m&1;
        if(lastBit){
            ans = ans*a;
        }
    }
}

int main ()
{

int n;
cin >> n;

cout << printBinary(n) << "\n";
int m;
cin >> m;
cout <<  printDecimal(m) << "\n";
return 0;
}