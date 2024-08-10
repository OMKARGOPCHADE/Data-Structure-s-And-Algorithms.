#include<iostream>
using namespace std;
int main()
{
    string s = "abc34";
    for(int i = 0; i<s.length(); i++)
    {
        if(s[i]>='0'&&s[i]<='9')
        { 
            s.erase(s.begin()+i-1,s.begin()+i+1);
            //s.erase(s.begin()+i);
            i-=2;
        }
    }
    cout<<s;
    return 0;
}