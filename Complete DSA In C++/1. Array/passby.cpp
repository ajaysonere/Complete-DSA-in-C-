#include<iostream>
using namespace std;
// pass by value
void update1(int num){
    num++;
}
// pass by reference 
void update2(int &num){
    num++;
}
int main ()
{
 int number1;
 cin >> number1;
 update1(number1);
 cout << "Pass by value "<< number1 << "\n";
int number2;
cin >> number2;
update2( number2);
cout <<"Pass by reference "<<  number2 << "\n";
return 0;
}