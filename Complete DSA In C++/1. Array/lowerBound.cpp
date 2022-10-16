#include<iostream>
#include<vector>
using namespace std;
int lowerBound(vector<int>v,int val){  // Time Complexity is O(n)
    if(v[0]>val){
        return -1;
    }
    for(int i=0;i<v.size();i++){
        if(v[i]==val){
            return val;
        }
        else if(v[i]>val){
            return v[i-1];
        }
    }
}

int lowerBound1(vector<int> v,int val){
    if(v[0]>val){
        return -1;
    }
    int low=0;
    int start =0;
    int end =v.size()-1;
    while(start<=end){
        int mid = (start+end)/2;
        if(val==v[mid]){
            return val;
        }
        else if(val>v[mid]){
            if(v[mid]>val){
                return low;
            }
            else{
                low = v[mid];
                start = mid+1;
            }
        }
        else{
            end = mid-1;
        }
   }
   return low;
}
int main ()
{
int size;
cin >> size;
vector<int> v;
int value;
for(int i=0;i<size;i++){
    cin >> value;
    v.push_back(value);
}
cout << "The vector is :" << "\n";
for(int i=0;i<v.size();i++){
    cout << v[i] << " ";
}
cout << "\n";
int val;
cin >> val;
cout << "The Lower Bound is :" << lowerBound(v,val) << "\n";
cout << "The Lower Bound is :" << lowerBound1(v,val) << "\n";
return 0;
}