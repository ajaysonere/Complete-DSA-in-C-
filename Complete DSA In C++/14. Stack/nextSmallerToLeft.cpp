#include<iostream>
#include<vector>
#include<stack>
using namespace std;


// brute force approach time com- > O(n^2)
vector<int> nextSmallerElementFromLeft(vector<int> v){
    vector<int> ans;
    ans.push_back(-1);
    for(int i=1;i <v.size(); i++){
       bool flag = false;
       for(int j= i-1; j>=0; j--){
          if(v[j] < v[i]){
            ans.push_back(v[j]);
            flag = true;
            break;
          }
       }
       if(!flag){
          ans.push_back(-1);
       }
    }
    return ans;
}

vector<int> nextSmallerElementFromLeftOptimized(vector<int> v){
    vector<int> ans;
    stack<int> s;
    for(int i=0; i<v.size(); i++){
        if(s.empty()){
            ans.push_back(-1);
        }else if(s.top() < v[i]){
            ans.push_back(s.top());
        }else{
            while(!s.empty() && s.top() >= v[i]){
                s.pop();
            }
            if(s.empty()){
                ans.push_back(-1);
            }else{
                ans.push_back(s.top());
            }
        }
        s.push(v[i]);
    }
    return ans;
}

int main ()
{
    vector<int> v(5);

    // taking input in vector
    for(int i=0; i<v.size(); i++){
        cin >> v[i];
    }

    vector<int> ans = nextSmallerElementFromLeft(v);
    vector<int> ansOptimized = nextSmallerElementFromLeft(v);

    // using the O(N^2)
    for(int i=0; i<ans.size();i++){
        cout << ans[i] << " ";
    }
    cout << "\n";

    // using the O(N)
    for(int i=0; i<ansOptimized.size(); i++){
        cout << ansOptimized[i] << " ";
    }
    cout << "\n";

    return 0;
}