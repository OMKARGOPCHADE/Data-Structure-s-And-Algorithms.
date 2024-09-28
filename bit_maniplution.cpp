#include<bits/stdc++.h>
using namespace std;
int main()
{
    //swapping two number with xor operation
    int a = 22, b = 33;
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    cout<<a<<" "<<b<<endl;
    //check if ith bit is set or not.
    int n = 13;
    int i = 2;
    if(n & (1 << i)) cout<<"set";
    else printf("Not set");
    return 0;
}