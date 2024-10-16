#include <bits/stdc++.h>
using namespace std;
vector<string> fizzBuzz(int n)
{
    vector<string> s;
    for (int i = 1; i <= n; i++)
    {
        if(i%3==0 && i%5==0) 
        {
            s.emplace_back("FizzBuzz");
        }
        else if(i%3==0)
        {
            s.emplace_back("Fizz");
        }
        else if(i%5==0)
        {
            s.emplace_back("Buzz");
        }
        else s.emplace_back(to_string(i));
    }
    return s;
}
int main()
{
    vector<string>str;
    int n ;
    cin>>n;
    str = fizzBuzz(n);
    for(auto i:str)cout<<i<<" ";
    return 0;
}