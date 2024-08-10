#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str = "MCMXCIV";
    map<int, string> m;
    m[1] = "I";
    m[4] = "IV";
    m[5] = "V";
    m[9] = "IX";
    m[10] = "X";
    m[40] = "XL";
    m[50] = "L";
    m[90] = "XC";
    m[100] = "C";
    m[400] = "CD";
    m[500] = "D";
    m[900] = "CM";
    m[1000] = "M";
    map<string, int> m1;
    m1["I"] = 1;
    m1["IV"] = 4;
    m1["V"] = 5;
    m1["IX"] = 9;
    m1["X"] = 10;
    m1["XL"] = 40;
    m1["L"] = 50;
    m1["XC"] = 90;
    m1["C"] = 100;
    m1["CD"] = 400;
    m1["D"] = 500;
    m1["CM"] = 900;
    m1["M"] = 1000;
    map<int, string>::iterator it = m.begin();
    int num = 0;
    int temp = 0;
    int size = str.size();
    while (!str.empty())
    {
        while (it != m.end())
        {
            size_t found = str.find(it->second);
            string s = "";
            if (found != string::npos)
            {
                s = str[found];
                if(found < str.size()-1)s = s + str[found+1];
                if (m1.count(s))
                {
                    num += m1[s];
                    str.erase(found, s.length());
                    break;
                }
                else
                {
                    s = "";
                    num += it->first;
                    s = it->second;
                    str.erase(found, s.length());
                    break;
                }
            }
            ++it;
        }
    }
    cout << num;
    // cout <<endl << it->second ;
    // // cout <<" "<<(++it)->second;
    // cout<<endl;
    // ++it;
    // size_t found = str.find(it->second);
    // cout<<found;
    // cout<<str[found+1];
    // I             1
    // V             5
    // X             10
    // L             50
    // C             100
    // D             500
    // M             1000
    return 0;
}