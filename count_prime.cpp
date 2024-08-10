#include <bits/stdc++.h>
using namespace std;
int countPrimes(int n)
{
    int cnt = 0;
    for (int p = 2; p < n; p++)
    {
        int i = 2;
        for (; i <= 9; i++)
        {
            if (p % i == 0)
            {
                if (p == i)
                    cnt++;
                break;
            }
        }
    }
    return cnt;
}
int main()
{
    cout<<countPrimes(10);
    return 0;
}