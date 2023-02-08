#include<iostream>
using namespace std;

int power(int a ,int n){
    int ans = 0;
    if(n==0){
        return 1;
    }
    ans  = a*power(a, n-1);
    return ans;
}

int power2(int a ,int n){
    if(n==0){
        return 1;
    }
    // cout << n << " " << "\n";
    int subProblem = power2(a, n/2);
    int subProblemSuq = subProblem*subProblem;
    if(n&1){
        // cout << "Inside " << subProblemSuq << "\n";
        return a*subProblemSuq;
    }
    // cout << "sub" << subProblem << "\n";
    return subProblemSuq;
}

int main ()
{
    int a,n;
    cin >> a >> n;

   
    // power of a 
    int ans = power2(a,n);
    cout << ans;

    return 0;
}