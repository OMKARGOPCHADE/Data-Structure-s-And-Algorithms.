#include<iostream>
using namespace std;
int main()
{
    int a = 27, b = 5;
    double ans = 0;
    int cnt = 0;
    while (a>0)
    {
        a = a - b;
        cnt++;
    }
    if(a < 0) 
    {
        ans = cnt - 0.5;
    } else ans = cnt;
    cout<<ans;
    return 0;
}