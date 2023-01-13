#include<iostream>
using namespace std;

string removeDuplicates(string str){
    int arr[26] = {0};
    for(int i=0;i<str.length();i++){
        arr[str[i]-'a']++;
    }
    string result = "";
    for(int i=0;i<26;i++){
        // cout << arr[i] << " ";
        if(arr[i]>0)
            result += 'a'+ i;
    }

    return result;
}

int main ()
{
  string str;
  getline(cin,str);
  string result = removeDuplicates(str);
  cout << "String is " << result << "\n";
  return 0;
}