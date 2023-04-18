#include<iostream>
#include<vector>
#include<unordered_map>
#include<map>
#include<queue>
using namespace std;

vector<int> frequentSort(vector<int> arr ){
    
}

int main ()
{
    int size;
    cin >> size;
    vector<int> vec(size);
    for(int i=0; i<vec.size(); i++){
        cin >> vec[i];
    }
    vector<int>ans = frequentSort(vec);
    for(int i=0; i<ans.size(); i++){
        cout << ans[i] << " ";
    }
    cout << "\n";
    return 0;
}