#include<bits/stdc++.h>
using namespace std;
void sparray(vector<vector<int>>arr)
{
    for(auto s:arr)
    {
        for(auto i : s) cout<<i<<" ";
        cout<<endl;
    }
}
int main()
{
   vector<vector<int>>arr={{1,3,3},{4,5,6}};
   sparray(arr);
    return 0;
}