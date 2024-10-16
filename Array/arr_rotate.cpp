#include <bits/stdc++.h>
using namespace std;
// void rotate(vector<int> &nums, int k)
// {
//     int t = nums.size();
//     if(t!=1)
//         while (k)
//         {
//              nums.insert(nums.begin(),nums[t-1]);
//              nums.erase(nums.end()-1);
//              k--;
//             // for(int i =0;i<nums.size();i++)
//             // {
//             //     // if(i == 0)
//             //     // {
//             //     //     temp = nums[i];
//             //     //     nums[i] = nums[nums.size()-1];
//             //     // }
//             //     // else
//             //     // {
//             //     //     int temp2 = nums[i];
//             //     //     nums[i] = temp;
//             //     //     temp = temp2;
//             //     // }

//             // }
//             //k--;
//         }

// }
void rotate(vector<int> &nums, int k)
{
    int n = nums.size();
    if (n == k)
        return;
    else if (k > n)
    {
        if (k % n == 0)
            return;
        else
        {
            while(k>n)k = k - n;
            vector<int> arr(nums.end() - k, nums.end());
            for (int i = 0; i < n - k; i++)
            {
                arr.emplace_back(nums[i]);
            }
            for (int i = 0; i < n; i++)
            {
                nums[i] = arr[i];
            }
        }
    }
    else
    {
        vector<int> arr(nums.end() - k, nums.end());
        for(auto i : arr) cout<<i<<" ";
        cout<<endl;
        for (int i = 0; i < n - k; i++)
        {
            arr.emplace_back(nums[i]);
        }
        for (int i = 0; i < n; i++)
        {
            nums[i] = arr[i];
        }
    }
}
int main()
{
    vector<int> nums = {3, 9, -1, -100};
    rotate(nums, 7);
    for (auto i : nums)
        cout << i << " ";
    return 0;
}