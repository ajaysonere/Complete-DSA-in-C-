#include<iostream>
#include<vector>
#include<queue>
using namespace std;

long long minimumCostRope(vector<long long >v){
    priority_queue<long long , vector<long long> , greater<long long> > pq;

    for(int i=0; i<v.size(); i++){
        pq.push(v[i]);
    }

    long long ans = 0;
    while(pq.size()>1){
        long long a = pq.top();
        pq.pop();
        long long b = pq.top();
        pq.pop();

        long long sum = a+b;
        ans  += sum;
        pq.push(sum);
    }
    return ans;
}

int main ()
{
    long long size;
    cin >> size;
    // taking input
    vector<long long> v(size);
    for(int i=0; i<v.size(); i++){
        cin >> v[i];
    }
    // calling the function for get answer
    long long ans = minimumCostRope(v);
    cout << "Minimum cost is " << ans << "\n";

    return 0;
}