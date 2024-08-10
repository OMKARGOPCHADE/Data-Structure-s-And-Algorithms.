#include <bits/stdc++.h>
using namespace std;
// ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
// {
// }
int myAtoi(string s)
{
    long long int number = 0, c = 0, cn = 0;
    for (auto i : s)
    {
        if (i == '+' || i == '-')
            cn++;
        if (cn > 1)
            break;
        else if (i == ' ' || i >= '0' && i <= '9' || i == '+' || i == '-')
        {
            if (i == ' ')
                continue;
            else if (i >= '0' && i <= '9')
            {
                int n = int(i - '0');
                number = number * 10 + n;
            }
            else if (i == '-')
                c = 1;
            // else if(i == '+')
            //     c = 2;
        }
        else
            break;
    }
    if (number < INT32_MIN)
    {
        number = -2147483647;
    }
    else if (number > INT32_MAX)
    {
        number = 2147483648;
    }
    if (c == 1)
        return -number;
    return number;
}
string longestCommonPrefix(vector<string> &strs)
{
    string str = "";

    for (int i = 0; i < strs.size(); i++)
    {
        for (int j = 0; j < strs[i].length(); j++)
        {
            int len = 0;
            if (!i <= strs.size() - 1)
                len = strs[i + 1].length();
            if (len == 0)
                break;
            if (strs[i][j] == strs[i + 1][j])
                str += strs[i][j];
            len--;
        }
    }
    return str;
}
int main()
{

     string str;
    // getline(cin, str);
    // cout << myAtoi(str);

    vector<string> strs = {"flower", "flow", "flight"};
    // cout <<longestCommonPrefix(strs);
    for (int i = 0; i < strs.size(); i++)
    {

        for (int j = 0; j < strs[i].length(); j++)
        {
            int len = 0;
            if (!i <= strs.size() - 1)
                len = strs[i + 1].length();
            if (len == 0)
                break;
            cout << strs[i][j] << " " << strs[i + 1][j] << endl;
            string s = s + strs[i][j];
            str.append(s);
            len--;
        }
    }
    cout<<endl<<str;
    return 0;
}