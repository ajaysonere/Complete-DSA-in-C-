#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main ()
{
 string str = "HELLO WORLD "; // it is dynamic in size
 cout << str << "\n";

//  str.clear();
 if(str.empty()){
    cout << "The string is empty " << "\n";
 }else{
    cout << "The string is not empty " << "\n";
 }

 string str2 = "BY";

//  add a character at the last the string
//  str.push_back(str2);
//  cout << str << "\n";

str.pop_back();
cout << str << "\n";

// inset a string at position 12
str.insert(11,"By String Class");
cout << str << "\n";

//  erase the sub-string at positions 12 to 20
str.erase(11,15);
cout << str << "\n";

//  replace the characters at starting positions to ending positions 
// str.replace(1,5,"AJAY");
// cout << str << "\n";

// extract the sub-string form the string
string str3 =  str.substr(0,5);
cout << str3 << "\n";

// swap the two string with each other
// cout << "str1 is " << str2 << "\n";
// cout << "str2 is " << str3 << "\n";
// str2.swap(str3);
// cout << "str1 is " << str2 << "\n";
// cout << "str2 is " << str3 << "\n";

 for(char ch :str){
   cout << ch << " " ;
 }
 cout << "\n";

// getline(cin,str,'.');

 vector <string> vec;

 for(int i=0;i<5;i++){
   string temp;
   getline(cin,temp);
   vec.push_back(temp);
 } 
 
 cout << "String " << "\n";
 for(string x :vec){
   cout << x << "\n";
 }

 return 0;
}