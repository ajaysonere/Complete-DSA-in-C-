#include<iostream>
using namespace std;

int main ()
{
    char arr[][10] = {
                      "one",
                      "Two",
                      "Three",
                      "Four",
                      "Five",
                      "Six"
                   };
    // cout << arr[1] << "\n";
    int i=2;
    cout << arr[i][0] << "\n";
    return 0;
}