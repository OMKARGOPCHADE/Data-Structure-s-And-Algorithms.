#include <bits/stdc++.h>
using namespace std;
string removeDigit(string number, char digit)
{

    int ind1 = number.find(digit);
    int ind2 = number.find(digit, ind1 + 2);

    if (ind1 >= 0 && ind2 < 0)
    {
        number.erase(ind1, 1);
        return number;
    }
    else if (ind1 >= 0 && ind2 >= 0)
    {
        string str1 = "", str2 = "";
        string temp = number;
        str1 = temp.erase(ind1, 1);
        str1 = number.erase(ind2, 1);
        if(str1 >= str2) return str1;
        return str2;
    }
    return number;
}
int main()
{
    string str = "133235";
    cout << removeDigit(str, '3');
    return 0;
}