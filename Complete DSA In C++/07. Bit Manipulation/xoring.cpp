#include<iostream>
#include<vector>
using namespace std;


// find unique element in array 
int xoring (vector<int> v){
    int ans =v[0];
    for(int i=1; i<v.size(); i++){
        ans = ans^v[i];
    }
    return ans;
}

int main ()
{
    int size;
    cin >> size;
    vector<int> vec(size);
    for(int i=0;i<size;i++){
        cin >> vec[i];
    }

    int ans = xoring(vec);
    cout << "Unique Element is :" << ans << "\n";
    return 0;
}