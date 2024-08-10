#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cout<<"test cases: ";
    cin>>t;
    while (t)
    {
        int n;
        cin>>n;
        int k;
        cin>>k;
        int arr[n];
        for(int i=0; i<n; i++)cin>>arr[i];
        for(int j = 0; j<n;)
        {
            int t=j;
            while (j<(t+k)&&j<n)
            {
                cout<<arr[j]<<" ";
                j++;
            }
            cout<<endl;
            
        }
        t--;
    }
    
    return 0;
}