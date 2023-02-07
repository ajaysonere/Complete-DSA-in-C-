#include<iostream>
#include<vector>
using namespace std;


void printElementInIncresingOrder(int n, vector<int> &ans){
    if(n==0){
        return;
    }
    printElementInIncresingOrder(n-1, ans);
    ans.push_back(n);
}

vector<int> printElement(int n){
    vector<int> ans;
    printElementInIncresingOrder(n,ans);
    return ans;
}

int main ()
{
 int n;
 cin >> n;
 vector<int> ans = printElement(n);
 for(int i=0; i<ans.size(); i++){
    cout << ans[i] << " ";
 }
 
 return 0;
}