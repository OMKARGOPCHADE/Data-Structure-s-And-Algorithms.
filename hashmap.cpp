#include <bits/stdc++.h>
using namespace std;
int sumOfUnique(vector<int> &nums)
{
    int sum = 0;
    map<int, int> hm;
    for (int i = 0; i < nums.size(); i++)
    {
        hm[nums[i]]++;
    }
    for (auto i : hm)
    {
        if (i.second == 1)
            sum += i.first;
    }
    return sum;
}
int main()
{
    vector<int> array = {1,2,2,3,5,6};
   // cout<<sumOfUnique(array);
   // vector<int>r(array);
    vector<int>::iterator it = max_element(array.begin(),array.end());  
    printf("%d",*it);
   // unordered_map<int, int> hm;

    // int max = 0, temp = 0;
    // for (int i = 0; i < array.size(); i++)
    // {
    //     hm[array[i]]++;
    //     if (temp < hm[array[i]])
    //     {
    //         temp = hm[array[i]];
    //         max = temp;
    //     }
    //     else if (temp == hm[array[i]])
    //         max += hm[array[i]];
    // }
    // cout << max;
    // int temp = 0;
    // for(auto i : hm)
    //    if(i.second == max)
    //     temp += i.second;
    // cout<<temp;
    return 0;
}