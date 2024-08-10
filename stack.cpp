#include <bits/stdc++.h>
using namespace std;
int main()
{
    stack<char> s;
    string str = "()(()";
    int cnt = 0;
    for (auto i : str)
    {
        if (i == ' ')
            continue;
        if (i == '(')
            s.push(i);
        else if (i == ')' && !s.empty())
        {
            s.pop();
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}