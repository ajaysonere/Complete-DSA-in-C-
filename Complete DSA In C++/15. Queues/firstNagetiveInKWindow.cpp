#include<iostream>
#include<queue>
#include<vector>
using namespace std;

vector<int> firstNagetiveElementInWindow(int arr[],int k,int size){
   deque<int> dq;
   vector<int> ans;
   
   // inserting index of first window element to the 
   for(int i=0; i<k;i++){
      if(arr[i]<0){
         dq.push_back(i);
      }
   }

  // storing the answer  
   if(dq.size()>0){
      ans.push_back(arr[dq.front()]);
   }else{
      ans.push_back(0);
   }

   // for remaing windows
   for(int i=k; i<size;i++){
      // for removing the extra element 
      if(!dq.empty() && i - dq.front() >= k){
         dq.pop_front();
      }

      // for adding next window element
      if(arr[i] <0){
        dq.push_back(i);
      }

      // for storig the ans;
      if (dq.size() > 0)
      {
        ans.push_back(arr[dq.front()]);
      }
      else
      {
        ans.push_back(0);
      }
   }
    return ans;
}

int main ()
{
    cout <<"Enter the size of the array \n";
    int size;
    cin >> size;
    int arr[size];
    for(int i=0;i<size;i++){
        cin >> arr[i];
    }
    cout << "Enter the size of window" <<"\n";
    int k;
    cin >> k;
    vector<int> ans = firstNagetiveElementInWindow(arr,k,size);
    for(int i=0; i<ans.size();i++){
        cout << ans[i] << " ";
    }
    return 0;
}