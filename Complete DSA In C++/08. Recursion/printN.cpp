#include<iostream>
using namespace std;

// Print int Decresing order
void printNDec(int n){
    if(n==0){
        return ;
    }
    cout << n << " ";
    printNDec(n-1);
}

void printNInc(int n){
    if(n==0){
        return ;
    }
    printNInc(n-1);
    cout << n << " ";
}

int main ()
{
    int n;
    cin >> n;

    printNDec(n);
    cout << "\n";
    printNInc(n);
    return 0;
}