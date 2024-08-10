#include <bits/stdc++.h>
using namespace std;
int minimumBoxes(vector<int> &apple, vector<int> &capacity)
{
    int cnt = 0;
    int apple_sum = 0;
    int capacity_sum = 0;
    sort(capacity.begin(),capacity.end());
    for (auto i : apple)
        apple_sum += i;
    for (int i = capacity.size()-1; i>=0; i--)
    {
        capacity_sum += capacity[i];
        cnt++;
        if (capacity_sum >= apple_sum)
            return cnt;
    }
    return cnt;
}
int main()
{
    vector<int> apple = {1,8,3,3,5};
    vector<int> capacity = {3,9,5,1,9};
    cout<<minimumBoxes(apple,capacity);
    return 0;
}