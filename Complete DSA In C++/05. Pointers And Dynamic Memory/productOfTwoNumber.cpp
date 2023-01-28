#include<iostream>
using namespace std;
int productOfTwoNumber(int *m, int *n , int *ans){
    *ans = (*m)*(*n);
}

int main ()
{
    int m ,n;
    cin >> m >> n;

    int *mptr = &m;
    int *nptr = &n;

    int ans {};
    productOfTwoNumber(mptr,nptr, &ans);
    cout << ans << "\n"; 
    return 0;
}