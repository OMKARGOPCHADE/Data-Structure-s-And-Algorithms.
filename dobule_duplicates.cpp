#include <bits/stdc++.h>
using namespace std;
vector<int> searchRange(vector<int> &nums, int target)
{
    vector<int> v;
    int first = lower_bound(nums.begin(), nums.end(), target) - nums.begin();
    int second = upper_bound(nums.begin(), nums.end(), target) - nums.begin();
    if (first >= nums.size() || first == 0 && second - 1 == -1)
    {
        v.emplace_back(-1);
        v.emplace_back(-1);
        return v;
    }
    else if (nums.at(first) == target && nums.at(second - 1) == target)
    {
        v.emplace_back(first);
        v.emplace_back(second - 1);
        return v;
    }
    v.emplace_back(-1);
    v.emplace_back(-1);
    return v;
}
int main()
{
    vector<int> v = {5, 7, 7, 8, 8, 9, 11};
    vector<int> result;
    result = searchRange(v, 7);
    for (auto i : result)
        cout << i << " ";
    return 0;
}