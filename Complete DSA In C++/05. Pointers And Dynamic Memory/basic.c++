#include<iostream>
using namespace std;

int main ()
{
    cout << "Pointers and Dynamic Memory" << "\n";
    int y = 10;
    // cout << " Address of X " << y << "\n";
    cout << " Address of Y " << &y << "\n";

    int *ptr = &y;
    cout << " Address of ptr " << &ptr << "\n";

    int ** yptr = &ptr;
    cout << " Address of yptr " << &yptr << "\n";
    return 0;
}