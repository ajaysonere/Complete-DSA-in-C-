#include<iostream>
using namespace std;

bool isPermutation(string str , string str2){
   
   int countStr =0;
   for(int i=0;i<str.length();i++){
      countStr += str[i];
   } 
   int countStr2 =0;
   for(int j=0;j<str2.length();j++){
      countStr2 += str2[j];
   }

   if(countStr == countStr2){
      return true;
   }else{
      return false;
   }
}

int main ()
{
 string str;
 getline(cin , str);

 string str2 ;
 getline(cin , str2);
 
 int result = isPermutation(str,str2);

 if(result == true){
    cout << "String is permutation " << "\n";
 }else{
   cout << "String is not permutation " << "\n";
 }

 return 0;
}