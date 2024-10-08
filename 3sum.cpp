#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> threeSum(vector<int> &nums)
{
    vector<vector<int>> result;
    sort(nums.begin(), nums.end());
    for (int i = 0; i < nums.size(); i++)
    {
        if (i > 0 && nums[i] == nums[i - 1])
            continue;
        int j = i + 1;
        int k = nums.size() - 1;
        while (j < k)
        {
            int sum = nums[i] + nums[j] + nums[k];
            if (sum < 0)
                j++;
            else if (sum > 0)
                k--;
            else
            {
                vector<int> v = {nums[i], nums[j], nums[k]};
                result.push_back(v);
                j++;
                k--;
                while (j < k && nums[j] == nums[j - 1])
                    j++;
                while (j < k && nums[k] == nums[k + 1])
                    k--;
            }
        }
    }
    return result;
}
int main()
{
    vector<int> nums = {3, 0, -2, -1, 1, 2};
    vector<vector<int>> result = threeSum(nums);
    for (int i = 0; i < result.size(); i++)
    {
        for (auto j : result[i])
        {
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}