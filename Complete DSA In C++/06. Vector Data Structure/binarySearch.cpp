#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main ()
{
    cout << "Binary Search Using In-Built Function " << "\n";
    int size;
    cin >> size;

    vector<int> vec(size,0);
    for(int i=0;i<size;i++){
        cin >> vec[i];
    }

    sort(vec.begin(),vec.end());
    
    int key;
    cin >> key;
    bool it = binary_search(vec.begin(),vec.end(),key);

    if(it){
        cout << "Element is present " << "\n";
    }else{
        cout << "Element is not present " << "\n";
    }

    return 0;
}