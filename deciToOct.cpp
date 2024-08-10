#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num = 13;
    int rem , ans = 0, multi = 1;
    while (num)
    {
       rem = num % 8;
       num = num / 8;
       ans = rem * multi + ans;
       multi = multi * 10;
    }
    cout<<ans;
    
    return 0;
}