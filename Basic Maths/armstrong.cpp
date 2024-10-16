#include <bits/stdc++.h>
using namespace std;
bool checkArmstrong(int n)
{
    int a = 0, t = n, temp = 0;
    string s = to_string(n);
    int l = s.length();
    while (n != 0)
    {
        temp = (n % 10);
        a += pow(temp,l);
        //cout<<a<<endl;
        n = n / 10;
    }
    if (a == t)
        return true;
    return false;
}
int main()
{
   cout << checkArmstrong(1634);
    return 0;
}