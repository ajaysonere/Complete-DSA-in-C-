#include<iostream>
#include<vector>
#include<queue>
#include<unordered_map>
using namespace std;

vector<char> firstNonRepetingCharacter(vector<char> str){
    unordered_map<char ,int> count;
    vector<char> ans;
    queue<int> q;

    for(int i=0; i<str.size(); i++){
        count[str[i]]++;
        q.push(str[i]);

        while(!q.empty()){
            if(count[q.front()]> 1){
                q.pop();
            }else{
                ans.push_back(q.front());
                break;
            }
        }
        if(q.empty()){
            ans.push_back('0');
        }
    }
    return ans;
}

int main ()
{
    int size;
    cin >> size;
    vector<char> str(size);
    for(int i=0; i<size; i++){
        cin >> str[i];
    }
    vector<char> ans = firstNonRepetingCharacter(str);
    for(int i=0; i<ans.size(); i++){
        cout << ans[i] << " ";
    }
    return 0;
}