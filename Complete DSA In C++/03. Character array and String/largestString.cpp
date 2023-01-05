#include<iostream>
#include<cstring>
using namespace std;

int main ()
{
  
  char res[1000];
  int n;
  cin >> n;
  cin.get();
  while(n--){
    char ch[1000];
    cin.getline(ch,1000);
    if(strlen(ch) > strlen(res)){
        strcpy(res,ch);
    }
  }
  cout << "Largest String is " << res << "\n";
  return 0;
}