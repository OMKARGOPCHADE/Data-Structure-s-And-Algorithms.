#include <bits/stdc++.h>
using namespace std;
string getPermutation(int n, int k)
{
    string str;
    vector<int> nums;
    for (int i = 1; i <= n; i++)
        nums.emplace_back(i);
    for(int i = 1; i<k; i++)
    {
        next_permutation(nums.begin(), nums.end());
    }
    long long num = 0;
    for(auto i : nums) num = num * 10 + i;
    str = to_string(num);
    return str;
}
int main()
{
    cout << getPermutation(4, 9);
    return 0;
}