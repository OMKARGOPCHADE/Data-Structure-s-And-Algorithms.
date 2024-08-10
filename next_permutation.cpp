#include <bits/stdc++.h>
using namespace std;
// vector<vector<int>> permute(vector<int> &nums)
// {
//     vector<vector<int>> ans;
//     vector<int>v;
//     while (next_permutation(nums.begin(), nums.end()))
//     {
//         v.push_back(nums[0]);
//         v.push_back(nums[1]);
//         v.push_back(nums[2]);
//         ans.push_back(v);
//         v.clear();
        
//     }
//     //cout << ans[0][0] << " " << ans[0][1] << " " << ans[0][2];
//     return ans;
// }
int main()
{
    vector<int> nums = {1,2,3}, v;
    vector<vector<int>> ans;
   // ans = permute(nums);
    sort(nums.begin(),nums.end());
    do
    {
       ans.emplace_back(nums);
    } while (next_permutation(nums.begin(),nums.end()));
   // cout << ans[0][0] << " " << ans[0][1] << " " << ans[0][2]<<endl;
    for(int i = 0; i<ans.size();i++)
    {
        for(int j = 0; j<3; j++)
        {
        cout << ans[i][j] << " ";
        }
        cout<<endl;
    }
    cout<<8/2;
    return 0;
}