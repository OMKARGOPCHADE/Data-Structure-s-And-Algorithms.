#include <bits/stdc++.h>
using namespace std;
int longestIdealString(string s, int k)
{
    string t = "";
    //sort(s.begin(),s.end());
    for (int i = 0; i < s.length();i++)
    {
        for (int j = i + 1; j <= s.length(); j++)
        {
            if (s[j] - s[i] <= k || s[i] - s[j] <=k && s[i] - s[j] >= -k)
            {
                if(!count(t.begin(),t.end(),s[i]))
                     t += s[i];
                     i = j;
                     i--;
                     break;
            }
            else continue;
        }
    }
    cout<<t;
    return t.length();
}
int main()
{
    string s = "pvjcci";
    cout << longestIdealString(s, 4);
   // if('p'-'v')cout<<true;
    return 0;
}