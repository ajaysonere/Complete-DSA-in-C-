
template <typename T>
class Vector
{
    T *arr;
    int cs;
    int ms;

public:
    Vector(int maxSize = 1)
    {
        cs = 0;
        ms = maxSize;
        arr = new T[ms];
    }

    void push_back(T data)
    {
        if (cs == ms)
        {
            T *oldArr = arr;
            ms = 2 * cs;
            arr = new T[ms];
            for (int i = 0; i < cs; i++)
            {
                arr[i] = oldArr[i];
            }
            delete[] oldArr;
        }
        arr[cs] = data;
        cs++;
    }

    void pop_back()
    {
        if (cs >= 0)
        {
            cs--;
        }
    }

    // front ,back , size ,capacity
    T front() const
    {
        return arr[0];
    }

    T back() const
    {
        return arr[cs - 1];
    }

    T at(int i) const
    {
        return arr[i];
    }

    int size() const
    {
        return cs;
    }

    int capacity() const
    {
        return ms;
    }

    T operator[](T i) const
    {
        return arr[i];
    }
    bool find(T d){
        for(int i=0;i<cs;i++){
            if(arr[i] == d){
                return true;
            }
        }
        return false;
    }
};