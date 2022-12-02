#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int pairSticks(vector<int> lenght,int d){
    int count =0;
    sort(lenght.begin(),lenght.end());
    for(int i=0;i<lenght.size()-1;){
        int j=i+1;
        if((lenght[i]-lenght[j])<=d){
            count++;
            i=j+1;
        }else{
            i++;
        }
    }
    return count;
}

int main ()
{

vector<int>lenght(5,0);

// taking input in vector
for(int i=0;i<lenght.size();i++){
    cin >> lenght[i];
}

// vector is-
for(int i=0;i<lenght.size();i++){
    cout << lenght[i] << " ";
}
cout << "\n Enter the value of the difference of the two sticks \n";
int d=0;
cin >> d;
cout << "The Number of Pairs is:" << pairSticks(lenght,d)<< "\n";

 
return 0;
}