#include<iostream>
using namespace std;


// pass by value 
// void taxOnIncome(int income){
//     income -= 10;
// }


// pass by reference 
void taxOnIncome(int &income){
    income -=10;
}

int main ()
{
    // int x = 10;
    // int &y = x;
    // cout << y << "\n";
    // y++;
    // cout << x << "\n"; // output - 11

    // int &z = y;
    // cout << z << "\n";  // output - 11 

    // z++;
    // cout << x << "\n";
    int income;
    cin >> income;

    taxOnIncome(income);
    cout << "After Appling tax income is :" << income << "\n";

    return 0;
}