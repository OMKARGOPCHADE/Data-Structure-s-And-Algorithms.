#include<bits/stdc++.h>
using namespace std;
void merge(vector<int>&arr,int low, int mid, int high)
{
    vector<int>v;
    int left = low;
    int right = mid+1;
    while(left<= right && right<= high)
    {
        if(arr[left]<=arr[right]){ v.emplace_back(arr[left]); left++; }
        else {v.emplace_back(arr[right]); right++;}
    }
    while(left<=mid){v.emplace_back(arr[left]); left++;}
    while(right<=high){v.emplace_back(arr[right]); right++;}
    for(int i = low; i=high; i++)
    {
        arr[i] = v[i-low];
    }
}
void mergeSort(vector<int>&arr,int low, int high)
{
    if(low>=high)return;
    int mid = (low+high)/2;
    mergeSort(arr,low,mid);
    mergeSort(arr,mid+1,high);
    merge(arr,low,mid,high);
}
int main()
{
    vector<int>nums={10,2,46,2,7,2,89};
    mergeSort(nums,0,7);
    return 0;
}