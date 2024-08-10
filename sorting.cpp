#include<bits/stdc++.h>
using namespace std;
void SelectionSort(vector<int>nums)
{
    for(int i = 0; i<nums.size()-1;i++)
    {
        int min = min_element(nums.begin()+i,nums.end())-nums.begin();
        swap(nums[min],nums[i]);
    }
    for(auto i:nums) cout<<i<<" ";
}
void BubbleSort(vector<int>nums)
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
void Sort012(vector<int>nums)
{
    //Dutch National Flag Algorithm
    int min = 0, mid = 0, high = nums.size()-1;
    while(mid<=high)
    {
        if(nums[mid]==0)
        {
            swap(nums[mid],nums[min]);
            min++;
            mid++;
        }
        else if(nums[mid]==1)
        {
            mid++;
        }
        else{
            swap(nums[mid],nums[high]);
            high--;
        }
    }
    for(auto i:nums)cout<<i<<" ";
}
int main()
{
    vector<int>arr={10,3,5,13,4,6,35,6};
    vector<int>nums={2,1,0,2,1,0};
    cout<<"Selection Sort: ";
    SelectionSort(arr);
    cout<<endl;
    cout<<"Bubble sort: ";
    BubbleSort(arr);
    cout<<endl;
    cout<<"Insertion sort: ";
    InsertionSort(arr);
    cout<<endl;
    cout<<"0's, 1's, and 2's sort: ";
    Sort012(nums);
    return 0;
}