#include<iostream>
#include<algorithm>
#include<vector>
#include<stack>
using namespace std;

vector<int> nextSmallerElementFromRight(vector<int> v){
    vector<int> ans;
    for(int i=0; i<v.size()-1; i++){
        bool flag = true;
        for(int j=i+1; j<v.size(); j++){
            if(v[j] < v[i] ){
                ans.push_back(v[j]);
                flag = false;
                break;
            }
        }
        if(flag){
            ans.push_back(-1);
        }
    }
    ans.push_back(-1);
    return ans;
}

vector<int> nextSmallerElementFromRightOptimized(vector<int> v){
    vector<int> ans;
    stack<int> s;
    for(int i=v.size()-1; i>=0; i--){
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

    reverse(ans.begin(),ans.end());
    return ans;
}

int main ()
{ 
    vector<int> v(5);
    for(int i=0; i<v.size(); i++){
        cin >> v[i];
    }
    vector<int> ans = nextSmallerElementFromRight(v);
    vector<int> ansOptimized = nextSmallerElementFromRightOptimized(v);

    // for O(N^2)
    for(int i=0; i< ans.size(); i++){
        cout << ans[i] << " ";
    }
    cout << "\n";

    // for O(N)

    for(int i=0; i<ansOptimized.size(); i++){
        cout << ansOptimized[i] << " ";
    }
    cout << "\n";
    return 0;
}