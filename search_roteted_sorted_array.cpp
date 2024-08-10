#include <bits/stdc++.h>
using namespace std;
bool search(vector<int> &nums, int target)
{
    // int ind = lower_bound(nums.begin(),nums.end(),target)-nums.begin();
    // cout<<ind;
    // if(ind<nums.size()) return true;
    // return false;
    for(auto i:nums)
        if(i==target) return true;
    return false;
    
}
int main()
{
    vector<int> nums = {2};
    int target = 0;
    cout<<search(nums,target);
    return 0;
}