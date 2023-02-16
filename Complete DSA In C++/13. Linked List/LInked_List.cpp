#include<iostream>
#include "list.h"
using namespace std;

int main ()
{
    List obj;
    obj.push_front(2);
    obj.push_front(1);
    obj.push_back(3);
    obj.push_front(4);
    obj.push_front(6);
    obj.push_back(8);
    obj.insert(2,5);
    
    Node* head = obj.begin();
    while(head != NULL){
        cout << head->data << " ";
        head = head->next;
    }
    cout << "\n";
    int key;
    cin >> key;

    // int res = obj.search(key);
    // if(res == -1){
    //     cout << "key is not present " << "\n";
    // }else{
    //     cout << "Key is present at index " << res << "\n";
    // }

    // Node* fake = head;
    int ans = obj.recursiveSearch(key);
    if (ans == -1)
    {
        cout << "key is not present "<< "\n";
    }
    else
    {
        cout << "Key is present at index " << ans << "\n";
    }
    // (obj.search(key)== -1) ? cout << "Key is not Found ":cout << "key is present "<< "\n";
    return 0;
}