#include<bits/stdc++.h>
using namespace std;
int main()
{
    // //swapping two number with xor operation
    // int a = 22, b = 33;
    // a = a ^ b;
    // b = a ^ b;
    // a = a ^ b;
    // cout<<a<<" "<<b<<endl;
    // //check if ith bit is set or not with left shit.
    // int n = 70;
    // int i = 2;
    // if((n & (1 << i))!=0) cout<<"set";
    // else printf("Not set");

    // //check if ith bit is set or not with left shit.
    // if(((n >> i)&1)!=0) cout<<"set";
    // else printf("Not set");

    // set and clear ith bit
    // int num = 13, i = 2;
    // if(((num>>i) & 1))
    // {
    //     i = ~(1<<i);
    //     int n = (num & i);
    //     cout<<true<<" "<<num<<" "<<n;
    // }
    // else 
    // {
    //     int n = (num | (1<<i));
    //     cout<<false<<" "<<n<<" "<<num;
    // }
    int n = 5;
    int ans = 13 | 14;
    cout<<ans;
    return 0;
}