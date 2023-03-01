#include <vector>
using namespace std;

template<typename T>
class Stack{
   vector<T> arr;
   public:
   void push(int data){
     arr.push_back(data);
   }
   bool isEmpty(){
      return arr.size() == 0; 
   }
   T peek(){
     int index = arr.size()-1;
     return arr[index];
   }
   void pop(){
     arr.pop_back();
   }
};