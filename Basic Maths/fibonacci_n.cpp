#include<bits/stdc++.h>
using namespace std;
int main()
{
    int f  = 0, a = -1, b = 1;
    int n;
    cin>>n;
    while (n)
    {
      f = a + b;
      a = b;
      b = f;
      n--;
      cout<<f;
    }
    
    
    return 0;
}