#include <bits/stdc++.h>
using namespace std;
// string rev(string s)
// {
//     string str;
//     int i = 0;
//     int n = s.length();
//     while (i < n)
//     {
//         while (i < n && s[i] == ' ')
//             i++;
//         if (i >= n)
//             break;
//         int j = i+1;
//         while (j < n && s[j] != ' ')
//             j++;
//         string st = s.substr(i, j);
//         if (str.length() == 0)
//             str = st;
//         else
//             str = st + " " + str;
//         i = j + 1;
//     }
//     return str;
// }
string a ;
int i = 1;
bool isPalindrome(string str) {

  if (i <= str.size()) {
    a += str[str.length()-i];
    cout << a << endl;
    i++;
    isPalindrome(str);
  }
   if (a == str) {
    return true;
  }

  return false;
}
int main()
{
    string str ="omkar";
    // getline(cin, str);
    // reverse(str.begin(),str.end());
    // cout << str;
    // for(auto i: str) st = i + st;
    // reverse(str.rbegin(),str.rend());
    // cout <<endl << str;
    // st+='o';
    // st+='m';
    // st.append(str);
    // cout<<endl<<st;
   // string st = rev(str);
    //cout << endl << isPalindrome("abbba");
    cout << str.erase(1,2);
    return 0;
}