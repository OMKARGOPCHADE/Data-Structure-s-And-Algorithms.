#include<bits/stdc++.h>
using namespace std;
void pSS(int ind, vector<int>&ds,int arr[], int n)
{
    if(ind == n)
    {
        for(auto it: ds) cout<<it<<" ";
        cout<<endl;
        return;
    }
    if(ind == 0) cout<<"{}";
     pSS(ind+1,ds,arr,n);
    ds.emplace_back(arr[ind]);
    pSS(ind+1,ds,arr,n);
    ds.pop_back();
    // pSS(ind+1,ds,arr,n);
}
int main()
{
    int arr[] = {3,1,2};
    int ind = 0, n = 3;
    vector<int>ds;
    pSS(ind,ds,arr,n);
    return 0;
}