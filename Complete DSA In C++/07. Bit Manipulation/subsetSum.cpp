#include<iostream>
#include<vector>
using namespace std;

vector<bool> subSetSum(vector<int> num , vector<int> query){
    
}

int main ()
{
    int size;
    cin >> size;
    vector<int> num(size);
    for(int i=0;i<size;i++){
        cin >> num[i];
    }
    vector<int> query(size);
    for(int i=0;i<size; i++){
        cin >> query[i];
    }

    vector<bool> ans = subSetSum(num,query);

    for(int i=0; i<ans.size(); i++){
        cout << ans[i] << " ";
    }
    cout << "\n";
    return 0;
}