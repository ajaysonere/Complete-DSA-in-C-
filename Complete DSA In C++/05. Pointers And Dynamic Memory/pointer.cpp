#include<iostream>
using namespace std;

int main ()
{
    int x = 10;
    int *ptr = &x;
    cout << &x << " " << *ptr << "\n";
    int *nas = 0;
    cout << &nas << " " << nas;

    int x = 5;
    cout << "Address of 5 "<< &x << "\n";
    int *ptr = &x;
    cout << *ptr << "\n";

    int *nptr = nullptr;
    cout << "Null Ptr " << *nptr << "\n";
    return 0;
}