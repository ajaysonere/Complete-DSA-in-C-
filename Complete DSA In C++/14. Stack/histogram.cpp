#include<iostream>
#include<algorithm>
#include<vector>
#include<stack>
using namespace std;

vector<int> nextSmallerElementFromLeft(vector<int> v){
    vector<int> left;
    stack<pair<int,int>> s;
    int psuadoIndex = -1 ;
    for(int i=0; i<v.size(); i++){
        if(s.empty()){
            left.push_back(psuadoIndex);
        }else if(s.top().first < v[i]){
            left.push_back(s.top().second);
        }else{
            while(!s.empty() && s.top().first >= v[i]){
                s.pop();
            }
            if(s.empty()){
                left.push_back(0);
            }else{
                left.push_back(s.top().second);
            }
        }
        s.push({v[i],i});
    }
    return left;
}

vector<int> nextSmallerElementFromRight(vector <int> v){
    vector<int> right;
    stack<pair<int,int>> s;
    int psuadoIndex = v.size()+1;
    for(int i=v.size()-1; i>=0; i--){
        if(s.empty()){
           right.push_back(psuadoIndex);
        }else if(s.top().first < v[i]){
           right.push_back(s.top().second);
        }else{
            while(!s.empty() && s.top().first >= v[i]){
               s.pop();
            }
            if(s.empty()){
               right.push_back(psuadoIndex);
            }else{
                right.push_back(s.top().second);
            }
        }
        s.push({v[i],i});
    }
    reverse(right.begin(),right.end());
    return right;
}

int maxRectangleInHistoGram(vector<int> v){
    vector<int > left = nextSmallerElementFromLeft(v);
    vector<int> right = nextSmallerElementFromRight(v);
    vector<int> width(6);

    for(int i=0; i<v.size(); i++){
        width[i] = right[i]-left[i]-1;
    }
    vector<int> area(6);
    for(int i=0; i<v.size(); i++){
        area[i] = v[i]*width[i];
    }

    int largest = -1;
    for(int i=0; i<area.size(); i++){
        if(area[i]>largest){
            largest = area[i];
        }
    }
    return largest;
}

int main ()
{
    vector<int> v(6);
    
    // taking input height of the histogram
    for(int i=0; i<v.size(); i++){
        cin >> v[i];
    }

    int ans = maxRectangleInHistoGram(v);
    cout << "Max Length In the HistoGram " << ans << "\n";

    return 0;
}