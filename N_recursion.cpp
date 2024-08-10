#include <bits/stdc++.h>
using namespace std;
vector<int> v;
vector<int> f1(int n)
{
    if (n == 1)
    {
        // v.push_back(n);
        v.emplace_back(n);
        // f1(n-1);
    }
    // v.emplace_back(n);
    else
    {
        v.emplace_back(n);
        f1(n - 1);
    }
    //    else v.emplace_back(1);
    sort(v.begin(), v.end());
    return v;
}
vector<string> str;
vector<string> printNTimes(int n)
{
    if (n == 1)
        str.emplace_back("Coding Ninjas");
    else
    {
        str.emplace_back("Coding Ninjas");
        printNTimes(n - 1);
    }
    // sort(str.begin(),str.end());
    return str;
}
int main()
{
    vector<int> v1;
    v1 = f1(3);
    for (auto i : v1)
    {
        cout << i << " ";
    }
    cout << endl;
    vector<string> str1;
    str1 = printNTimes(4);
    for (auto i : str1)
    {
        cout << i << " ";
    }
    return 0;
}
