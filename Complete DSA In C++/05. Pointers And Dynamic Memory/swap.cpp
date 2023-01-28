#include<iostream>
using namespace std ;
void swapXandY(int **x ,int **y){

    cout << x << " " << y << "\n";
    cout << *x << " " << *y << "\n";
    cout << &(*x) << " " << &(*y) << "\n";
    // cout << x  <<  " " << &(*x) << "\n";
    // int temp = **x ;
    // **x = **y;
    // **y= temp;
}

int main(){
    
    int x,y;
    cin >> x >>y ;
    cout << &x  << " " << &y << "\n";
    int *ptrX = &x;
    int *ptrY = &y;
   
    cout << &ptrX << " " << &ptrY << "\n";
    swapXandY(&ptrX , &ptrY);
    // cout << x << " " << y << "\n";
    return 0;
}