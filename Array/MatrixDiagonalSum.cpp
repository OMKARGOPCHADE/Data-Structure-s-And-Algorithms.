#include<bits/stdc++.h>
using namespace std;
int MatrixDiagonalsum(vector<vector<int>>mat)
{
    int n = mat.size();
    int sum = 0;
    if(n==1) return mat[0][0];
    else{
        int i = 0;
        int j = mat[0].size()-1;
        for(int k = 0; k<n; k++)
        {
            if(i!=j)
            {
                int a = mat[k][i];
                int b = mat[k][j];
                sum+=a+b;
            }
            else sum+=mat[k][i];
            i++;
            j--;
        }
    }
    return sum;
}
int main()
{
    vector<vector<int>> mat = {{1,10,11,12,13},{2,15,17,16,18},{3,19,4,20,21},{6,18,5,17,29},{8,5,6,2,3}};
    cout<<MatrixDiagonalsum(mat);
    
  return 0;
}