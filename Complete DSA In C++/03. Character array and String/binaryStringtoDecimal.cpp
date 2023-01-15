#include<iostream>
#include<typeinfo>
using namespace std;

// int binaryToDecimal(int n){
//     int temp = n;
//     int decimalResult= 0;
//     int base = 1;
//     while(temp){
//         int lastDigit = temp%10;
//         temp = temp/10;
//         decimalResult = decimalResult+(lastDigit*base);
//         base = base*2;
//     }
//     return decimalResult;
// }

int binaryStringToDecimal(string str){
    int num = stoi(str);
    int decimalResult = 0;
    int base = 1;
    while(num){
        int lastDigit = num%10;
        num = num/10;
        decimalResult = decimalResult + (lastDigit*base);
        base = base*2;
    }
    return decimalResult;
}

int main ()
{
 cout << "Enter the String Binary" << "\n";
 string str;
 cin >> str;
//  cout << "String length is :" << str.length() << str <<  "\n";
//  int num  = stoi(str);
//  cout << "Integer value is :" << num << "\n";

 int decimalBinaryResult = binaryStringToDecimal(str);
 cout <<  "Decimal Result is : " << decimalBinaryResult << "\n"; 
 return 0;
}