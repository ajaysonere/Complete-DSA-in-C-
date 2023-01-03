#include<iostream>
#include<cstring>
using namespace std;

int main ()
{

//  char a[] = "asdfgh";
//  for(char x:a){
//     cout << x << " ";
//  }
// cout << a << "\n";
// It will print the length of the char array without counting the null character in array
// cout << strlen(a) << "\n";

// with counting the null character 
// cout << sizeof(a) <<"\n";.
// char sentence[100];
// char temp = cin.get();
// int len =0;
// while(temp != '#'){
//     sentence[len++] = temp;
//     temp = cin.get();
// }

// sentence[len] = '\0';
// cout << "Length " << len << endl;
// cout << sentence << "\n";
 char ch[1000];
 int len =0;
 char temp = cin.get();
 while(temp != '#'){
      ch[len++] =  temp;
      temp = cin.get();
 }

cout << "Ch contains " << ch << "\n";
cout << "temp Contains"  << temp ;
// for(int i=0;i<1000000;i++){
//     cout << "Count is :" << i << "\n";
// }
return 0;
}