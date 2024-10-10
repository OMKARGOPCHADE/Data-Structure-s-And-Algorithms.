#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
    cin>>t;
	while(t--)
	{
	    int N,K;
	    cin>>N>>K;
	    int arr[N];
	    for(int i = 0; i<N; i++)
	    {
	        cin>>arr[i];
	    }
	    int cnt = 0;
	    for(int i = 0; i<N; i++)
	    {
	        if(arr[i]>K)break;
	        K-=arr[i];
	        cnt++;
	    }
	    cout<<cnt<<endl;
	}

}
