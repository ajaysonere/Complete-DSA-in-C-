#include<iostream>
#include<algorithm>
#include<vector>
using namespace std ;

int main(){
    
    
    // searching by array and pointers 
    //   int size;
    //   cin >> size;
    //   int arr[size];
    //   for(int i=0;i<size;i++){
    //     cin >> arr[i];
    //   }
    //    int key;
    //    cin >> key;

    //   int *p = find(arr, arr+(size-1), key);
    //   cout << p << "  " << arr+(size-1) << "\n";
    //   if( p != arr+(size-1)){
    //     cout << "Element is present " << "\n";
    //   }else{
    //     cout << "Element is not present " << "\n";
    //   }


    // searching by vector and iterator 
    int size;
    cin>> size;
    vector<int> vec(size,0);

    for(int i=0;i<vec.size();i++){
        cin >> vec[i];
    }


    int key ;
    cin >> key;

     vector<int>::iterator it = find(vec.begin(),vec.end(),key);

    cout << *it << "\n";
    cout << *vec.end() << "\n";
    if( it != vec.end()){
        cout << "Element is present " << "\n";
    }else{
        cout << "Element is not present " <<"\n";
    }

    // for(int x: vec){
    //     cout << x  << " ";
    // }

      
      return 0;
}