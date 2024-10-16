#include <bits/stdc++.h>
using namespace std;
int greaterCount(vector<int> arr, int value)
{
    int cnt = 0;
    for (auto i : arr)
        if (i > value)
            cnt++;
    return cnt;
}
vector<int> resultArray(vector<int> &nums)
{
    vector<int> arr1;
    vector<int> arr2;
    vector<int> result;
    for (int i = 0; i < nums.size(); i++)
    {
        if (i == 0)
        {
            arr1.emplace_back(nums[i]);
            arr2.emplace_back(nums[i + 1]);
            i++;
        }
        else
        {
            if (greaterCount(arr1, nums[i]) > greaterCount(arr2, nums[i]))
                arr1.emplace_back(nums[i]);
            else if (greaterCount(arr1, nums[i]) < greaterCount(arr2, nums[i]))
                arr2.emplace_back(nums[i]);
            else if (greaterCount(arr1, nums[i]) == greaterCount(arr2, nums[i]))
            {
                if (arr1.size() <= arr2.size())
                    arr1.emplace_back(nums[i]);
                else
                    arr2.emplace_back(nums[i]);
            }
        }
    }
    for (auto i : arr1)
        result.emplace_back(i);
    for (auto i : arr2)
        result.emplace_back(i);
    return result;
}
int search(vector<int> &nums, int target)
{
    int index = 0;
    for(auto i : nums)
    {
        if(i == target)
            return index;
        index++;
    }
    return -1;
}
int main()
{
    vector<int> input = {4,5,6,7,0,1,2};
    // result = resultArray(input);
    // for (auto i : result)
    //     cout << i << " ";
    cout<<search(input,5);
    return 0;
}