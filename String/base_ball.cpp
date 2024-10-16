#include <bits/stdc++.h>
using namespace std;
int calPoints(vector<string> &operations)
{
    vector<int> nums;
    for (auto i : operations)
    {
        if (i == "D")
        {
            int n = nums.back() * 2;
            nums.push_back(n);
        }
        else if (i == "C")
        {
            nums.pop_back();
        }
        else if (i == "+")
        {
            int n = nums.back();
            n += nums[nums.size() - 2];
            nums.push_back(n);
        }
        else
        {
            int n = stoi(i);
            nums.push_back(n);
        }
    }
    int sum = 0;
    for (auto i : nums)
        sum += i;
    
    return sum;
}
int main()
{
    vector<string> str = {"5", "-2", "4", "C", "D", "9", "+", "+"};
    cout << endl
         << calPoints(str);
    return 0;
}