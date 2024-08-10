#include <bits/stdc++.h>
using namespace std;
bool checkRecord(string s)
{
    int len = s.length();
    int A = 0, L = 0;
    for (int i = 0; i < len; i++)
    {
        if (s[i] == 'A')
            A++;
        else if (s[i] == 'L' && s[i + 1] == 'L' && s[i + 2] == 'L')
            L++;
    }
    if (A >= 2 || L >= 1)
        return false;
    return true;
}
int main()
{
    string str = "LLPPAPLL";
    cout << checkRecord(str);
    return 0;
}