#include<bits/stdc++.h>
using namespace std;

int compress(vector<char> chars){
   int i=0,j=0;
   while(i<chars.size()){
      char curr = chars[i];
      int count = 1;
      i++;
      while(i<chars.size() and chars[i] == curr){
          count++;
          i++;
      }
      chars[j] = curr;
      j++;
      if(count>1){
        string countStr = to_string(count);
        for(char c :countStr){
          chars[j]= c;
          j++;
        }
      }
   }
   return j;
}


int main ()
{
  
  vector<char> chars = {'a','a','b','b','c','c','c'};
  // for(char ch : chars){
  //   cout << ch << " ";
  // }
  int result = compress(chars);
  cout << "After Compression " << result << "\n";
  return 0;
}