#include<iostream>
using namespace std;

void printSpellOfNumber(int n , string str[]){
    if(n==0){
        return;
    }
    int lastDigit = n%10;
    printSpellOfNumber(n/10,str);
    cout << str[lastDigit] << " ";
}

int main ()
{
    int n;
    cin >> n;
    string str[] = {"zero","one", "two" , "three" , "four" , "five" , "six", "seven" ,"eight" , "nine"};
    printSpellOfNumber(n, str);
    return 0;
}