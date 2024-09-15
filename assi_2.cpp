#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> nums = {2,1,-1};
     int n = nums.size();
      int total = 0;
      for(int i=0;i<n;i++){
        total+=nums[i];
      }
      int left = 0;
      bool flag  = false;
      for(int i=0;i<n;i++){
        int right = total-left-nums[i];
        if(left==right){
            cout<<i<<endl;
            flag = true;
            break;
        }
        left+=nums[i];
      }
      if(!flag) cout<<-1<<endl;
    return 0;
}