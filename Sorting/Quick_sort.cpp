#include<bits/stdc++.h>
using namespace std;
int fQsort(vector<int>&arr,int low, int high)
{
    int p = (low+high)/2;
    int i = low;
    int j = high;
    while(i<j)
    {
        while(arr[i]<=arr[p] && i<high)i++;
        while(arr[j]>arr[p] && j>low)j--;
        if(i<j)swap(arr[i],arr[j]);
    }
    swap(arr[j],arr[p]);
    return j;
}
void Qsort(vector<int>&arr,int low, int high)
{
    if(low < high)
    {
        int p = fQsort(arr,low,high);
        Qsort(arr,low,p-1);
        Qsort(arr,p+1,high);
    }
}
int main()
{
    vector<int>arr = {1,4,6,2,4,8,7};
    cout<<"Quick Sort: ";
    Qsort(arr,0,7);
    for(auto i:arr)cout<<" "<<i;
    return 0;
}