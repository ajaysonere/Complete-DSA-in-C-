#include<iostream>
using namespace std;

int main ()
{
char sentence[100];
cin.getline(sentence,100);
cout << sentence << "\n";

// it will stop at the ? 
char ch[100];
cin.getline(ch,100,'?');
cout << ch << "\n";
return 0;
}