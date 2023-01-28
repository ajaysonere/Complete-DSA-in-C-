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
    int x = 10;
    int *ptr = &x;

    *ptr = *ptr+1 ;
    cout << x << "\n" << *ptr ;
    int *pointer {};  // initialize by null pointer 
    cout << pointer << "\n";

    int x{};
    cout << x << "\n";

    return 0;
}