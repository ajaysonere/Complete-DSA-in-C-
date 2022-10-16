#include<iostream>
#include<vector>
#include<utility>
using namespace std;
pair<int,int>sortedPairSum(vector<int>v,int x){
    pair<int,int> ans ;
    int i=0;
    int j=v.size()-1;
    int sum =0;
    int diff =1000000;
    while(i<j){
        sum = abs(x-(v[i]+v[j]));
        if(sum <diff){
            ans.first = v[i];
            ans.second = v[j];
            diff = sum;
        }
        if((v[i]+v[j])<x){
            i++;
        }
        else{
            j--;
        }
    }
    return ans;
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
 int x;
 cin >> x;
 pair<int ,int> pari1 = sortedPairSum(v,x);
 cout << pari1.first << " and " <<pari1.second <<"\n"; 
 return 0;
}