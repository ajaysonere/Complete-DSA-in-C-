#include<iostream>
using namespace std;

int fact(int n){
    if(n==0){
        return 1;
    }
    int ans = n*fact(n-1);
    // cout << n << " " << ans << "\n";
    return ans;
}


int main ()
{
    int n;
    cin >> n;
    cout << "Factorial is " << fact(n) << "\n";
    return 0;
}