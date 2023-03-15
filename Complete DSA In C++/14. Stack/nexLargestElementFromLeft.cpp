#include<iostream>
#include<vector>
#include<stack>
using namespace std;

vector<int> nextLargestElementFromLeft(vector<int> v){
    vector<int>ans;
    // for  index 0
    ans.push_back(-1);

    for(int i=1; i<v.size(); i++){
        bool flag = true;
        for(int j=i-1; j>=0; j--){
            if(v[j] > v[i]){
                ans.push_back(v[j]);
                flag = false;
                break;
            }
        }
        if(flag == true){
            ans.push_back(-1);
        }
    }
    return ans;
}

int main ()
{
    vector<int> v(4);
    
    // Taking Input From User 
    for(int i=0; i<v.size(); i++){
        cin >> v[i];
    }

    vector<int> ans = nextLargestElementFromLeft(v);

    // print the output
    for(int i=0; i<ans.size(); i++){
        cout << ans[i] << " ";
    }

    return 0;
}