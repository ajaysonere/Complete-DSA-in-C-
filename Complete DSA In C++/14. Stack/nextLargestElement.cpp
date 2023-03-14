#include <bits/stdc++.h>
#include <vector>
#include<stack>
using namespace std;


// The solution will take O(n^2) time complexity 
vector<int> nextGreatestElement(vector<int> vec)
{
    vector<int> ans;
    for (int i = 0; i < vec.size() - 1; i++)
    {
        for (int j = i + 1; j < vec.size(); j++)
        {
            if (vec[j] > vec[i])
            {
                ans.push_back(vec[j]);
                break;
            }
        }
    }
    ans.push_back(-1);
    return ans;
}

vector<int> nextGreatestElementOptimized(vector<int> vec){
    stack<int> s;
    vector<int> ans;
    int size = vec.size()-1;
    for(int i= size ; i>=0 ; i--){
        if(s.empty()){
            ans.push_back(-1);
        }else if(s.top() > vec[i]){
            ans.push_back(s.top());
        }else{
            while(!s.empty() && s.top() <= vec[i]){
                s.pop();
            }
            if(s.empty()){
                ans.push_back(-1);
            }else{
                ans.push_back(s.top());
            }
        }
        s.push(vec[i]);
    }
    reverse(ans.begin(), ans.end());
    return ans;
}

int main()
{
    vector<int> vec(6);
    // taking input in vector
    for (int i = 0; i < vec.size(); i++)
    {
        cin >> vec[i];
    }

    // calling the next greatest element function
    // vector<int> ans = nextGreatestElement(vec);
     vector<int> ans = nextGreatestElementOptimized(vec);

    // ans
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
}
