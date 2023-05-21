#include<iostream>
#include<string>
#include<vector>
using namespace std;

void findPermutation(string str, int pos,  vector<string> &ans){
    // base condition
    if(pos >= str.size()){
       ans.push_back(str);
       return ;
    }

    // recursion
    for(int i = pos; i<str.size(); i++){
        swap(str[i], str[pos]);
        findPermutation(str , pos+1, ans);
        swap(str[i] , str[pos]);
    }
}

int main(){
    string str;
    cin >> str;
    vector<string> ans ;
    findPermutation(str , 0 , ans);
    for(auto x : ans){
        cout << x << " ";
    }
    return 0;
}