#include <bits/stdc++.h>
using namespace std;
bool isPalindrome(string s)
{
    string str = "";
    int i = 0;
     cout << s << endl;
    for (i = 0; i < s.size(); i++)
    {
       
        if (s[i] >= 'a' && s[i] <= 'z' || s[i] >= 'A' && s[i] <= 'Z' || s[i]>='0' && s[i]<='9')
        {
            char c = (char)tolower(s[i]);
            str += c;
            // char c1 = (char)tolower(s[(s.size() - i - 1)]);
            // str2 += c1;
        }
    }
    s = "";
    for (i = 0; i < str.size(); i++)
    {
        s += str[(str.size() - i - 1)];
    }

    cout << str << endl;
    cout << s << endl;
    if (str == s)
        return true;
    else
        return false;
}
int main()
{
    cout << isPalindrome("A man, a plan, a canal: Panama");
   cout << isPalindrome("0p");
    return 0;
}