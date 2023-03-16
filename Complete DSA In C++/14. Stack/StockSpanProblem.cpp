#include<iostream>
#include<vector>
#include<stack>
using namespace std;

//Time complexity of This Naive Solution Will be O(n^2)
vector<int> stockSpanProblem(vector<int> vec){
   vector<int> ans;
   ans.push_back(1);
   for(int i=1; i<vec.size(); i++){
       int span = 1;
       for(int j=i-1; j>=0; j--){
          if(vec[j] > vec[i]){
             ans.push_back(span);
             break;
          }else{
            span++;
          }
       }
   }
   return ans;
}

//Time complexity of this Naive Solution Will be O(n) using stack
vector<int> stockSpanProblemOptimized(vector<int> &stockes){
    vector<int> ans;
    stack<pair<int,int>> s;
    for(int i=0; i<stockes.size(); i++){
        if(s.empty()){
            ans.push_back(-1);
        }else if(s.top().first > stockes[i]){
            ans.push_back(s.top().second);
        }else{
            while(!s.empty() && s.top().first <= stockes[i]){
                s.pop();
            }
            if(s.empty()){
                ans.push_back(-1);
            }else{
                ans.push_back(s.top().second);
            }
        }
        s.push({stockes[i],i});
    }
    for(int i=0; i<ans.size();i++){
        ans[i] = i-ans[i];
    }
    return ans;
    
}

int main ()
{
    vector<int> stockes(7);
    for(int i= 0; i < 7; i++){
        cin >> stockes[i];
    }
    vector<int> ans  = stockSpanProblemOptimized(stockes);

    for(int i = 0; i< ans.size() ; i++){
        cout << ans[i] << " ";
    }
    return 0;
}