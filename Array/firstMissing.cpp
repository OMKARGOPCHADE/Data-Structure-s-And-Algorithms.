#include <bits/stdc++.h>
using namespace std;
int firstMissingPositive(vector<int> &nums)
{
    sort(nums.begin(),nums.end());
    int ans_val = 1;
    for(int i = 0; i<nums.size();i++)
    {
        if(nums[i] <= 0) continue;
        else if(ans_val!=nums[i])
            return ans_val;
        else if(nums[i] != nums[i+1])
            ans_val++;
    }
    return ans_val;
    
}
// int firstMissingPositive(vector<int> &nums)
// {
//     //sort(nums.begin(),nums.end());
//     set<int> s;
//     for(auto i : nums) s.emplace(i);
//     int ans_val = 1;
//     for(auto i : s)
//     {
//         if(i <= 0) continue;
//         else if(ans_val!=i)
//             return ans_val;
//         else 
//             ans_val++;
//     }
//     return ans_val;
    
// }
int main()
{
    vector<int> arr = {1};
    cout<<firstMissingPositive(arr);
    return 0;
}