#include<iostream>
#include<vector>
using namespace std;

int factorial(int n){
    if(n == 0 || n == 1){
        return 1;
    }
    int fact = n*factorial(n-1);
    return fact;
}
vector<int> lastRowOfPascalTriangle(int n){
     n = n-1;
     vector<int> ans;
     for(int i=0;i<=n;i++){
      int comb = (factorial(n)/(factorial(i)*factorial(n-i)));
      ans.push_back(comb);
     }
     return ans;
}

int main ()
{
  int n;
  cin >> n;
  vector<int>ans = lastRowOfPascalTriangle(n);
  for(int i=0;i<ans.size();i++){
     cout << ans[i] << " ";
  }
  return 0;
}