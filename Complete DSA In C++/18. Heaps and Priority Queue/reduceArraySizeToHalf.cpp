#include<iostream>
#include<vector>
#include<map>
using namespace std;

int main ()
{
    int size;
    cin >> size;
    vector<int> v(size);
    for(int i=0; i<v.size(); i++){
        cin >> v[i];
    }
    int ans = reduceArraySizeToHalf(v);
    cout << "Answer is " << ans << "\n";
    return 0;
}