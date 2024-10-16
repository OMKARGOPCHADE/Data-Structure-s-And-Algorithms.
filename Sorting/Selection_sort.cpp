#include<bits/stdc++.h>
using namespace std;
void SelectionSort(vector<int>&nums)
{
    for(int i = 0; i<nums.size()-1;i++)
    {
        int min = min_element(nums.begin()+i,nums.end())-nums.begin();
        swap(nums[min],nums[i]);
    }
    for(auto i:nums) cout<<i<<" ";
}
int main()
{
    vector<int>nums={10,2,46,2,7,2,89};
    SelectionSort(nums);
    return 0;
}