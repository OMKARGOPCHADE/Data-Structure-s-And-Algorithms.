#include <bits/stdc++.h>
using namespace std;
int singleNumber(vector<int> &nums)
{
    sort(nums.begin(),nums.end());
    for (int i = 0; i < nums.size(); i++)
    {
        if(nums[i]==nums[i+1]) continue;
        else if(nums[0]!=nums[1]) return nums[0];
        else if(nums[i]!=nums[i-1]) return nums[i];
    }
    return 0;
}
int main()
{
    vector<int> nums = {4,1,2,2,1};
    cout << singleNumber(nums);
    return 0;
}
