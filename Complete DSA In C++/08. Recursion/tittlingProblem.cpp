#include<iostream>
using namespace std;

int numberOfWay(int n , int m){
    if(n<m){
        return 1;
    }
    int a  = numberOfWay(n-1,m);
    int b  = numberOfWay(n-m,m);
    return a+b; 
}

int main ()
{
    int n,m;
    cin >> n >> m;

    // print Number of way to fill this floor with tiles
    int ans  = numberOfWay(n,m);
    cout << ans << " ";
    return 0;
}