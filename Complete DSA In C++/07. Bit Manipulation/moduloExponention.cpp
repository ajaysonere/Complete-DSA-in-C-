#include<iostream>
using namespace std;

int moduloExponention(int x, int y, int mod)
{
    // your code goes here
    long long ans = 1;
    int a = x;
    while (y > 0)
    {
        int lastBit = y & 1;
        if (lastBit)
        {
            ans = (ans%mod * a%mod)%mod ;
        }
        a = (a%mod * a%mod)%mod;
        y = y>>1;
    }
    return ans;
}

int main ()
{
    int x,y;
    cin >> x >> y;
    int mod;
    cin >> mod;

    int ans = moduloExponention( x , y , mod );
    cout << ans << "\n";
    return 0;
}