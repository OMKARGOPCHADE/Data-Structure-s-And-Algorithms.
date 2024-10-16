#include <bits/stdc++.h>
using namespace std;
int myatoi(string s)
{
    // ignore leading whitespaces
    bool ngt = false;
    for (auto i : s)
    {
        if (i == ' ')
            continue;
        else if (i != ' ' && !i >= '0' && !i <= '9')
            return 0;
        else if (i == '-')
            ngt = true;
    }
    return 0;
}
string reverseWords(string s)
{
    vector<string> str;
    string new_s = "";
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] != ' ')
            new_s += s[i];
        else
        {
            str.emplace_back(new_s);
            new_s = "";
        }
    }
    str.emplace_back(new_s);
    new_s = "";
    for (int i = str.size() - 1; i > 0; i--)
    {
        new_s += str[i];
        new_s += " ";
    }
    new_s += str[0];
    return new_s;
}
void trim(string &str)
{
    int f_space = 0;
    int b_space = 0;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == ' ')
            f_space++;
        else
            break;
    }
    for (int i = str.size() - 1; i >= 0; i--)
    {
        if (str[i] == ' ')
            b_space++;
        else
            break;
    }
    str.erase(str.begin(), str.begin() + f_space);
    str.erase(str.end() - b_space, str.end());
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == ' ' && str[i + 1] != ' ')
            continue;
        else if (str[i] == ' ' && str[i + 1] == ' ')
        {
            str.erase(str.begin() + i);
            i--;
        }
    }
}
bool isValid(string word)
{
    if (word.size() < 3)
        return false;
    vector<char> vowels = {'a', 'A', 'e', 'E', 'i', 'I', 'o', 'O', 'u', 'U'};
    vector<char> numbers = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
    bool v = false, c = false;
    for (auto i : word)
    {
        if (count(vowels.begin(), vowels.end(), i) > 0)
        {
            v = true;
            break;
        }
    }
    for (auto i : word)
    {
        if (!count(vowels.begin(), vowels.end(), i)>0 && i >= 65 && i < 91 || i >= 97 && i <= 121&& !count(numbers.begin(), numbers.end(), i)>0)
        {
            c = true;
            break;
        }
    }
    if (v && c)
    {
        for (auto i : word)
        {
            if (!count(vowels.begin(), vowels.end(), i)>0 && !i >= 65 && !i < 91 || !i >= 97 && !i <= 121 && !count(numbers.begin(), numbers.end(), i)>0)
                return false;
        }
    }
    else
        return false;
    return true;
}
int main()
{
    string s = "Let's take LeetCode contest";
    // cout << s << s.length() << endl;
    // trim(s);
    string str = "";
    for(int i=s.length()-1;i>=0;i--)
        str+=s[i];
     cout << reverseWords(str);
    return 0;
}