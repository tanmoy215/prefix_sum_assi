#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> nums = {2,3,7,5,10};
    int n = nums.size();
     vector<int> ans(n);
     int m = INT_MIN;
     int prefix = 0;
     for(int i=0;i<n;i++){
        m = max(m,nums[i]);
        prefix+=nums[i]+m;
        ans[i]=prefix;
     }
     //check
     for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
     }
    return 0;
}