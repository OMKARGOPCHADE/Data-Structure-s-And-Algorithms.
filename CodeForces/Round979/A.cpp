#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i = 0; i<n; i++)
        {
            cin>>arr[i];
        }
        int b[n];
        b[0]=arr[0];
        int c[n];
        c[0]=arr[0];
        for(int i = 1; i<n; i++)
        {
            b[i] = min(b[i-1],arr[i]);
            c[i] = max(c[i-1],arr[i]);
        }
        int sum = 0;
        for(int i = 0; i<n; i++)
        {
             sum+= (c[i] - b[i]);
            cout<<c[i]<<" "<<b[i]<<endl;
        }
        cout<<sum<<endl;
    }
    return 0;
}