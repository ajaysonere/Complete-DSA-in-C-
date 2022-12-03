#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

int main()
{
    int w, h;
    cin >> w >> h;
    cout << "Enter the Number of the Kings :\n";
    int size;
    cin >> size;
    vector<int> a;
    vector<int>b;

    a.push_back(0);
    b.push_back(0);

    for(int i=0;i<size;i++){
        int x,y;
        cin >> x >>y;
        a.push_back(x);
        b.push_back(y);
    }

    a.push_back(w+1);
    b.push_back(h+1);

    sort(a.begin(),a.end());
    sort(b.begin(),b.end());

    int maxX=0,maxY=0;
    for(int i=0;i<a.size()-1;i++){
        maxX = max(maxX,a[i+1]-a[i]-1);
        maxY = max(maxY,b[i+1]-b[i]-1);
    }

    cout<< "The Maximum Undefend Rectangle is:" << maxX*maxY << "\n";



}