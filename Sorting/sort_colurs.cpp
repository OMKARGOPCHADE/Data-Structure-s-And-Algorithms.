#include <bits/stdc++.h>
using namespace std;
void sortColors(vector<int> &nums)
{
    for (int i = 0; i < nums.size(); i++)
    {
        for (int j = i + 1; j < nums.size(); j++)
        {
            if (nums[i] > nums[j])
            {
                //cout<<nums[i]<<endl;
                int temp = nums[i];
                nums[i] = nums[j];
                nums[j] = temp;
            }
        }
    }
}
int main()
{
    vector<int> nums = {2,0,2,1,1,0};
    sortColors(nums);
    for(auto i: nums) cout<<i<<" ";
    return 0;
}