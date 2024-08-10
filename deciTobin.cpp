#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num = 3;
    int ans = 0, rem, multi = 1;
    while (num)
    {
       rem = num  % 2;
       num = num / 2;
       ans = rem * multi + ans;
       multi = multi * 10;
    }
    cout<<ans;
    return 0;
}