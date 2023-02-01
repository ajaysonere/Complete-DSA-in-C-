#include<iostream>
using namespace std;

int getIthBit(int n, int i){
    int res = n >> i;
    return ((res & 1) > 0 ? 1 : 0); 
}

void setIthBit(int &n, int i){
     int res = (1<<i);
     n = n|res;
}

void clearIthBit(int &n, int i){
    int mask = ~(1<<i);;
    n = n&mask;
}

void updateIthBit(int &n , int i,int v){
    int mask = ~(1<<i);
    n = mask&n;
    int res = (v<<i);
    n = res|n;
}

void clearLastIBit(int &n ,int i){
    // first Way
    // n = n >> i;
    // n = (n<<i);
    int mask = (-1<<i);
    n = n&mask;
}

void clearRangeOfBits(int &n, int i, int j){
   int a = ~(0)<<(j+1);
   int b = (1<<i)-1;
   int mask = a|b;
   n= mask&n;

}
int main ()
{
    int n;
    cin >> n;
    int i;
    cin >> i;
    int j;
    cin >> j;
    // cout << "GET I th Bit " << getIthBit(n, i) << "\n";
    // setIthBit(n,i);
    // clearIthBit(n,i);
    // updateIthBit(n,i,1);
    // clearLastIBit(n,i);
    clearRangeOfBits(n,i,j);
    cout << n << "\n";
    return 0;
}