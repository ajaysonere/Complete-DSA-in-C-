#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main ()
{
    cout << "FIND THE LOWER AND UPPER BOUND " << "\n";
    int size;
    cin >> size;
    vector<int> vec(size,0);
    for(int i=0;i<size;i++){
        cin >> vec[i];
    }
    
    sort(vec.begin(),vec.end());

    int key;
    cin >> key;
    vector<int>::iterator low,up;
    low  = lower_bound(vec.begin(),vec.end(),key);
    up  = upper_bound(vec.begin(),vec.end(),key);
     cout << *low  << " " << *up << "\n";
    cout << "Lower Bound is :" << (low-vec.begin()) << "\n";
    cout << "Upper Bound is :" << (up-vec.begin()) << "\n";



    return 0;
}