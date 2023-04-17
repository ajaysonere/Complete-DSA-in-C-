#include<iostream>
#include<vector>
#include<queue>
using namespace std;

vector<int> kClosestElment(vector<int> vec, int k , int key){
    priority_queue<pair<int,int>> p;
    vector<int> ans;

    // pushing pair of element in the priority
    for(int i=0; i<vec.size(); i++){
        p.push({abs(vec[i]-key),vec[i]});
        if(p.size()>k){
            p.pop();
        }
    }

    // sotring all the value to the answer vector
    while(!p.empty()){
       ans.push_back(p.top().second);
       p.pop();
    }
    return ans;
}

int main ()
{
    int size;
    cin >> size;
    // declaring a vector
    vector<int> vec(size);
    for(int i=0; i<vec.size(); i++){
        cin >> vec[i];
    }

    int k;
    cin >> k;
    int key;
    cin >> key;
    vector<int> ans = kClosestElment(vec , k, key);
    cout << "Closest Element is " << key << "\n";
    for(auto x : ans){
        cout << x << " "; 
    }
    return 0;
}