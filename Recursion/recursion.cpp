#include <bits/stdc++.h>
using namespace std;
vector<string> str;
// str.emplace_back("Coding Ninjas");
string s = "Omkar Gopchade";
int i = 0;
vector<string> printNTimes(int n)
{
    if(n>0)
    {
        str.emplace_back(s);
        printNTimes(n-1);
    }
    return str;
}
int main()
{
    vector<string> v = printNTimes(10);
    for (auto i : v)
        cout << i << endl;
    return 0;
}