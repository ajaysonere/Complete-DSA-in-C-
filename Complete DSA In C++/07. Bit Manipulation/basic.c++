#include<iostream>
using namespace std;

int main ()
{
    // << "Bit ";
    
    int a = 10;
    int b = 5;
    cout << " AND " << (a&b) << "\n";
    cout << "  OR "  << (a|b) << "\n";
    cout << " XOR " << (a^b) << "\n";    
    
    // cout << (~452) << "\n";

    cout << " LEFT " << (b<<3) << "\n";
    cout << "RIGHT " << (b>>2) << "\n";
    
    
    
    
    return 0;
}