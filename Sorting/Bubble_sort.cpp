#include<bits/stdc++.h>
using namespace std;
void BubbleSort(vector<int>&nums)
{
    for(int i = 0; i<nums.size()-1;i++)
    {
        
        for(int j = i + 1; j<nums.size(); j++)
        {
            if(nums[i]>nums[j]) swap(nums[i],nums[j]);
           // cout<<"j"<<endl;;
        }
    }
    for(auto i:nums) cout<<i<<" ";
}
int main()
{
    vector<int>nums={10,2,46,2,7,2,89};
    BubbleSort(nums);
    return 0;
}