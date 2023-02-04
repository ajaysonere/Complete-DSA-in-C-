#include<iostream>
using namespace std;

int earthLevel(int n){
    int count = 0;
    int myLevel = 0;
    int a = 1;
    while(myLevel <= n){
        myLevel = myLevel+a;
        count++;
        a = a << 1;
    }
    return count-1;
}

int main ()
{ 
    int n;
    cin >> n;

    int ans  = earthLevel(n);
    cout << ans << "\n";
    return 0;
}