#include<iostream>
using namespace std;
//search a element using binary search (recursion)
int search_Recur(int num, int arr[], int low, int high)
{
    if(low>high)return -1;
    int mid = ( low + high )/2;
    if(arr[mid]==num)return mid;
    else if(arr[mid]>num)
    return  search_Recur(num,arr,low,mid-1);
    return search_Recur(num,arr,mid+1,high);
}
//using iterative structure.
int search_Itretaive(int num, int arr[])
{
    int low = 0;
    int high = 9;
    while(low<=high)
    {
        int mid = (low+high)/2;
        if(arr[mid]==num)return mid;
        else if(arr[mid]>num) high = mid-1;
        else low = mid + 1;
    }
    return -1;
}
//search insertion position.
int search_In_Po(int num, int arr[],int size)
{
    int low = 0;
    int high = size-1;
    int mid = 0;
    while(low<=high)
    {
        mid = (low+high)/2;
        if(arr[mid]==num)return mid+1;
        else if(arr[mid]>num) high = mid-1;
        else low = mid + 1;
    }
    return mid+1;
}
int main()
{
    int arr[]={1,3,5,6};
    cout<<search_Recur(11,arr,0,9);
    cout<<endl<<search_Itretaive(1,arr);
    cout<<endl<<search_In_Po(0,arr,3);
    return 0;
}