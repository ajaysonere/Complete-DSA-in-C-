#include<iostream>
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

// void printBinary(int n){
//     while(n>0){
//         cout << (n&1);
//         n = n>>1;
//     }
// }

// int printBinary(int n){
//     int ans = 0;
//     int p=1;
//     while(n>0){
//         int lastBit = n&1;
//         ans = ans+p*lastBit;
//         p = p*10;
//         n = n>>1;
//     }
//     return ans;
// }

int printDecimal(int n){
    int ans =0;
    int a = 1;
    // while(n!=0){
    //    int tmp = n%10;
    //    n = n/10;
    //    ans = ans+tmp*pow(2,a);
    //    a++;
    // }
    // return ans;
    
    while(n>0){
        int lastbit = n&1;
        n = n/10;
        if(lastbit)
            ans = ans+lastbit*a;
        a = a<<1;
    }
    return ans;
}

int main ()
{

// int n;
// cin >> n;

// cout << printBinary(n) << "\n";
int m;
cin >> m;
cout << printDecimal(m) << "\n";
return 0;
}