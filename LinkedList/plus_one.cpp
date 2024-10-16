#include <bits/stdc++.h>
using namespace std;
vector<int> plusOne(vector<int> &digits)
{
    int last = digits.back();
    if(count(digits.begin(),digits.end(),9)==digits.size())
    {
        int size = digits.size();
        digits.clear();
        digits.emplace_back(1);
        for(int i = 0; i<size;i++) digits.emplace_back(0);
    }
    else if (last < 9)
    {
        digits[digits.size() - 1] = digits[digits.size() - 1] + 1;
    }
    else if (last == 9)
    {
        long long int num = 0;
        auto it = digits.end();
        for (int c = 0, i = digits.size() - 1; i >= 0; i--, c++)
        {
            num = num * 10 + digits[i];
            it--;
            if (digits[i] < last)
                break;
        }
        digits.erase(it, digits.end());
        long long int act_num = 0;
        while (num)
        {
            int temp = num % 10;
            act_num = act_num * 10 + temp;
            num = num / 10;
        }
        num = act_num + 1;
        vector<int> v;
        while (num)
        {
            int temp = num % 10;
            v.emplace_back(temp);
            num = num / 10;
        }
        for (int i = v.size() - 1; i >= 0; i--)
            digits.emplace_back(v[i]);
    }
    return digits;
}
int main()
{
    vector<int> v = {9, 9, 9}, r;
    r = plusOne(v);
    for (auto i : r)
        cout << i << " ";
    return 0;
}