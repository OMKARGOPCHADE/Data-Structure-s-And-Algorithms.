#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {0, 1, 2, 2, 3, 0, 4, 2};
    cout << v[3];
    int value = 2;
    int k = v.size();
    vector<int> nums;
    for (int i = 0; i < k; i++)
    {
        //cout << v[i] <<" " << i << endl;
        if (v[i] == value)
        {
            //cout << " " << v[i] << " " <<i << endl;
           v.erase(v.begin() + i);
           //nums.push_back(v[i]);
           k--;
           i--;
        }
    }
  //  cout << endl << k << endl;
    for (auto i : v)
        cout << " " << i;
    return 0;
}