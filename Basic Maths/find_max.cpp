#include <bits/stdc++.h>
using namespace std;
int findMaxK(vector<int> &nums)
{
   
    sort(nums.begin(),nums.end());
    for (int i = 0; i < nums.size(); i++)
    {
        for(int j = nums.size()-1; j>i;j--)
        {
            if(nums[i] == -nums[j]) return nums[j];
        }
    }
    return -1;
}
int main()
{
    vector<int> nums = {-1, 10, 6, 7, -7, 1,1,2,-33,33};
    cout <<findMaxK(nums);
    return 0;
}