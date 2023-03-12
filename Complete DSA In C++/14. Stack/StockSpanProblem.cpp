#include<iostream>
#include<vector>
#include<stack>
using namespace std;

//Time complexity of This Naive Solution Will be O(n^2)
// void stockSpanProblem(vector<int> vec){
//     for(int i=0; i<vec.size(); i++){
//         int span =1;
//         for(int j= i-1; j>=0; j--){
//             if(vec[j] > vec[i]){
//                 break;
//             }else{
//                 span++;
//             }
//         }
//         cout << span << " ";
//     }
// }

//Time complexity of this Naive Solution Will be O(n) using stack
// vector<int> stockSpanProblem(vector<int> &stockes){
//     vector<int> ans;
//     stack<int> s;
    
// }

int main ()
{
    vector<int> stockes(7);
    for(int i= 0; i < 7; i++){
        cin >> stockes[i];
    }
    vector<int> ans  = stockSpanProblem(stockes);
    for(int i = 0; i< ans.size() ; i++){
        cout << ans[i] << " ";
    }
    return 0;
}