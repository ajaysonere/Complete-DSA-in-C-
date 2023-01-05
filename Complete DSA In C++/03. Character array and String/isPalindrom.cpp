#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(string str){
     // your code goes here 
     int start =0;
     int end = str.length()-1;
     while(start < end){
        if(str[start] != str[end]){
            return false;
        }else{
            start++;
            end--;
        }
     }
   return true;
}


int main ()
{
  string str;
  getline(cin , str);
//   bool result = true;
//   cout << result << "\n";
//   cout << "Length is " << str.length() << "\n";

  bool res = isPalindrome(str);
//   cout << "res is " << res << "\n"; 
  if(res == 1){
    cout << "String is Palindrom " << "\n";
  }else{
    cout << "String is not Palindrom " << "\n"; 
  }
  return 0;
}