#include<iostream>
#include<string>
using namespace std;

string vowelLetter(string str){
    string result = "";
    for(int i=0;i<str.length();i++){
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
            {
                result += str[i];
            }
    }
    return result;
}

int main ()
{
  string str;
  getline(cin,str);
  string result = vowelLetter(str);
  cout << "Vowel String is :" << result << "\n";
  return 0;
}