#include "Heap.h"
#include<vector>
using namespace std;

int main ()
{
    vector<int> v;
    for(int i=0; i<5; i++){
        cin >> v[i];
    }
    int ans =  maximumProduct(v);
    cout << ans << "\n";

    return 0;
}