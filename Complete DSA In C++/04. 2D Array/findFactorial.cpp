#include<iostream>
using namespace std;
int findFactorial(int n){
    if(n==0 || n==1){
        return 1;
    }
    int fact = n*findFactorial(n-1);
    return fact;
}

int combination(int n,int r){
    if(findFactorial(n)== -1 || findFactorial(r) == -1 || findFactorial(n-r)== -1){
        return -1;
    }

    int combination = (findFactorial(n) /(findFactorial(r)*findFactorial(n-r)));
    return combination;
}

int main ()
{
 cout << "Enter the value of N and R Two find Combination :" <<"\n";
 int n ,r;
 cin >> n >> r;
 int ans = combination(n,r);
 cout << "The Combinaion of the Number is : " << ans;
 return 0;
}