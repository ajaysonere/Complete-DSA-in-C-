#include<iostream>
#include<vector>
#include<unordered_set>
#include<algorithm>

using namespace std;

vector<int> interSection(vector<int> num1 , vector<int> num2){
    unordered_set<int> s;
    for(auto x : num1){
        s.insert(x);
    }
    vector<int> ans;
    for(int i=0; i<num2.size(); i++){
        int key =  num2[i];
        if(s.find(key) != s.end()){
            ans.push_back(key);
            s.erase(key);
        }
    }
    sort(ans.begin(), ans.end());
    return ans;
}

int main ()
{
    vector<int>num1(4);
    for(int i=0; i<num1.size(); i++){
        cin >> num1[i];
    }
    vector<int>num2(2);
    for(int i=0; i<num2.size(); i++){
        cin >> num2[i];
    }
    vector<int> ans = interSection(num1 , num2);
    for(int i=0; i<ans.size(); i++){
        cout << ans[i] << " ";
    }
    return 0;
}