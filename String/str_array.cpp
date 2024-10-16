#include <bits/stdc++.h>
using namespace std;
bool arrayStringsAreEqual(vector<string> &word1, vector<string> &word2)
{
    string str1 = "";
    string str2 = "";
    for(auto i : word1) str1+=i;
    for(auto i : word2) str2+=i;
    if(str1==str2) return true;
    return false;
}
int main()
{
    vector<string> word1 = {"abc", "d", "defg"};
    vector<string> word2 = {"abcddefg"};
    cout<<arrayStringsAreEqual(word1,word2);
    return 0;
}