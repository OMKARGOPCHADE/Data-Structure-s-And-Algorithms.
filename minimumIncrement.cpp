#include <bits/stdc++.h>
using namespace std;
int minIncrementForUnique(vector<int> &nums)
{
    sort(nums.begin(),nums.end());
    int cnt = 0;
    for(int i = 1; i<nums.size();i++)
    {
        if(nums[i]<=nums[i-1])
        {
            cnt += nums[i-1] - nums[i] + 1;
            nums[i] = nums[i-1] +1;
        }
    }
    return cnt;
}
int main()
{
    vector<int> nums = {3, 2, 1, 2, 1, 7};
    vector<int> arr = {1, 2, 2};
    cout << minIncrementForUnique(nums);
    cout << endl
         << minIncrementForUnique(arr);
    return 0;
}