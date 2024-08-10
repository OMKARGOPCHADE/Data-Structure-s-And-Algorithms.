#include <bits/stdc++.h>
using namespace std;
bool canJump(vector<int> &nums)
{
    int n = nums.size();

    for (int i = 0; i < n; i++)
    {
        int j = nums[i];
        cout<<j;
        if (j + i >= n - 1)
            return true;
    }
    return false;
}
int main()
{
    vector<int> v= {1};
    cout<<canJump(v);
    return 0;
}