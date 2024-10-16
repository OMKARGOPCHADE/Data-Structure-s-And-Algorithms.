#include <bits/stdc++.h>
using namespace std;
double findMedianSortedArrays(vector<int> &nums, vector<int> &nums2)
{
    for (auto i : nums2) //cout<<i<<endl;
        nums.emplace_back(i);
    sort(nums.begin(), nums.end());
    for(auto i : nums) cout<<i<<endl;
    if (nums.size() % 2 != 0)
    {
        double d = nums[nums.size() / 2];
        return d;
    }
    else
    {
        double midd = nums.size() / 2;
        double avg = nums[midd - 1] + nums[midd];
        double ans = avg / 2;
        return ans;
    }
    return 0;
}
int main()
{
    vector<int> arr = {1, 3};
    vector<int> arr2 = {2};
   cout<<findMedianSortedArrays(arr,arr2);
    return 0;
}