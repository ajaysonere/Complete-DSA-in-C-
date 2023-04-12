#include<vector>

template<typename T>
class Heap{
    vector<T> v;
    public:
    Heap(int defaultSize = 10){
        v.reserve(defaultSize+1);
        v.push_back(-1);
    }
};