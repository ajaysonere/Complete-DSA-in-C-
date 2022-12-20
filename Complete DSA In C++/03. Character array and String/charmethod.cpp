#include<iostream>
using namespace std;

int main ()
{
 char string[100];
//  cin >> string;
// cin.get(string,100);
char temp = cin.get();
int index =0;
while(temp != '#'){
    // cout << temp ;
    string[index++]=temp;
    temp = cin.get();
}
 string[index] = '\0';
 cout << "String Is :" << string << "\n";
 return 0;
}