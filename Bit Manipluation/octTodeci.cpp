#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num = 130;
    int rem, ans = 0, multi = 1;
    while (num)
    {
        rem = num % 10;
        num = num / 10;
        ans = rem * multi + ans;
        multi = multi * 8;
    }
    cout<<ans;
    
    return 0;
}