#include<bits/stdc++.h>
using namespace std;
int main()
{
    int c[2][2][2];
    for(int i=0; i<2;i++)
    {
        for(int j=0; j<2; j++)
        {
            for(int k=0; k<2;  k++)
            {
                cin >> c[i][j][k];
            }
        }
    }
        for(int i=0; i<2;i++)
    {
        for(int j=0; j<2; j++)
        {
            for(int k=0; k<2;  k++)
            {
                cout << c[i][j][k] <<" ";
            }
        }
        cout << endl;
    }
    cout << endl << "IT branch 2 class 2 student is: ";
    cout << c[1][1][1];
    return 0;
}