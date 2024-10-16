#include <bits/stdc++.h>
using namespace std;
int angaram(string str)
{
    string str1, str2;
    list<char> ls;
    int len = str.length();
    if (len % 2 != 0)
        return -1;
    for (int i = 0; i < len / 2; i++)
    {
        str1 += str[i];
    }
    for (int i = len / 2; i < len; i++)
    {
        str2 += str[i];
        ls.emplace_back(str[i]);
    }
    int count = 0;
    for (int i = 0; i < str1.length(); i++)
    {
        for (int j = 0; j < str2.length(); j++)
        {
            if (str1[i] == str2[j])
            {
                str2.erase(str2.begin() + j);
                break;
            }
           // else  count++;
        }
       
    }
    return str2.length();
}
int main()
{
    string str;
    // getline(cin,str);
    cout << angaram("xaxbbbxx");
    return 0;
}