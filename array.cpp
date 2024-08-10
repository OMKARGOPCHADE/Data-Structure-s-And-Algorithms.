#include <bits/stdc++.h>
using namespace std;
vector<int> resultArray(vector<int> &nums)
{
    vector<int> arr1;
    vector<int> arr2;
    vector<int> result;
    for (int i = 0; i < nums.size(); i++)
    {
        if (i == 0)
        {
            arr1.emplace_back(nums[i]);
            arr2.emplace_back(nums[i + 1]);
            i++;
        }
        else
        {
            if (arr1.back() > arr2.back())
            {
                arr1.emplace_back(nums[i]);
            }
            else if (arr2.back() > arr1.back())
            {
                arr2.emplace_back(nums[i]);
            }
        }
    }
    for (auto i : arr1)
        result.emplace_back(i);
    for (auto i : arr2)
        result.emplace_back(i);

    return result;
}
int sumOfEncryptedInt(vector<int> &nums)
{
    vector<int> v;
    int sum = 0, digits = 0, temp = 0;
    for (auto i : nums)
    {
        temp = i;
        while (temp)
        {
            digits = temp % 10;
            v.push_back(digits);
            temp = temp / 10;
        }
        digits = 0;
        sort(v.begin(), v.end());
        for (auto i : v)
            digits = digits * 10 + v.back();
        cout << digits << endl;
        sum += digits;
        v.clear();
    }
    return sum;
}
vector<int> decompressRLElist(vector<int> &nums)
{
    vector<int> result;
    int freq = 0;

    for (int i = 0; i < nums.size(); i += 2)
    {
        freq = nums[i];
        for (int j = 0; j < freq; j++)
            result.emplace_back(nums[i + 1]);
    }
    return result;
}
void sort012(int arr[], int n)
{

    int N = n;
    while (N / 2)
    {
        for (int i = 0; i < n; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }
        N--;
    }
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}
vector<int> duplicates(long long arr[], int n)
{
    vector<int> v;
    set<int> s;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                s.emplace(arr[i]);
            }
        }
    }
    if (s.size())
    {
        for (auto i : s)
            v.push_back(i);
        return v;
    }
    v.emplace_back(-1);
    return v;
}
void rotate(int arr[], int n)
{
    int temp_arr[n];
    for (int i = 0; i < n; i++)
        temp_arr[i] = arr[i];
    arr[0] = temp_arr[n - 1];
    for (int i = 0; i < n - 1; i++)
    {
        arr[i + 1] = temp_arr[i];
    }
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}
pair<long long, long long> getMinMax(long long a[], int n)
{
    pair<long long, long long> p;
    long long max = a[0];
    long long min = a[0];
    for (int i = 0; i < n; i++)
    {
        if (a[i] > max)
            max = a[i];
        if (a[i] < min)
            min = a[i];
    }
    p.first=min;
    p.second=max;
    return p;
}
int main()
{
    // vector<int> input = {1, 1, 2, 3};
    // vector<int> result = decompressRLElist(input);

    long long arr[] = {9, 5, 6, 8};
    // vector<int> result = duplicates(arr, 4);
    //    for (auto i : result)
    //         cout << i << " ";
    //rotate(arr, 4);
    pair<long long, long long> p = getMinMax(arr,4);
    cout<<p.first<<" "<<p.second;
    return 0;
}