#include<bits/stdc++.h>
using namespace std;
void InsertionSort(vector<int>nums)
{
    for(int i = 0; i<nums.size();i++)
    {
        int j = i;
        while(j>0&&nums[j-1]>nums[j]) 
        {
            swap(nums[j-1],nums[j]);
            j--;
        }
    }
    for(auto i:nums) cout<<i<<" ";
}
int main()
{
    vector<int>nums={10,2,46,2,7,2,89};
    InsertionSort(nums);
    return 0;
}