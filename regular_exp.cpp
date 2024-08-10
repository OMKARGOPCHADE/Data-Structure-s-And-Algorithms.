#include <bits/stdc++.h>
using namespace std;
bool isMatch(string s, string p)
{
    if(p == ".*")
    {
        if(!s.empty()) return true;
        return false;
    }
    else if(p.find("*")<p.length() && p.find("*")>=0)
    {
        if(!s.empty()) return true;
    }
}
int main()
{
    string str,p;
    cin>>str>>p;
    cout<<isMatch(str,p);
    //cout<<p.find("*");
    return 0;
}