#include <bits/stdc++.h>
using namespace std;
void revrse_array(int i, vector<int> &v)
{
    if (i >= v.size() / 2)
        return;

    swap(v[i], v[v.size() - i - 1]);
    revrse_array(i + 1, v);
}
void reverseArray(vector<int> &arr, int m)
{
    int j = 1;
    for (int i = m + 1; i < arr.size() / 2; i++)
    {
        swap(arr[i], arr[arr.size() - j]);
        j++;
    }
}
int remove_duplicates(vector<int> arr, int size)
{
    int count = 0;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == arr[i + 1])
            continue;
        else
            count++;
    }
    return count;
}
void sort(vector<int> &arr, int size)
{
    int temp;
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] > arr[j])
            {
                // temp = arr[i];
                // arr[i] = arr[j];
                // arr[j] = temp;
                swap(arr[i], arr[j]);
            }
        }
    }
}
int kthSmallest(int arr[], int k, int size)
{
    priority_queue<int, vector<int>, greater<int>> pq;
    for (int i = 0; i < size; i++)
        pq.push(arr[i]);
    for (int i = 1; i < k; i++)
        pq.pop();
    return pq.top();
}
int kthsmallest(int arr[], int l, int r, int k)
{

    // priority_queue<int, vector<int>, greater<int>> pq;
    set<int> s;
    for (int i = 0; i <= r; i++)
        s.emplace(arr[i]);
    // for(int j= 1; j<k; j++) pq.pop();
    auto it = next(s.begin(), k - 1);
    return *(it);
}
int missingElement(vector<int> &arr, int n)
{
    int sum1 = 0;
    int sum2 = 0;
    int diff = 0;
    for (auto i : arr)
        sum1 += i;
    sum2 = n * ((n + 1) / 2);
    diff = sum2 - sum1;
    return -diff;
}
int Maximize(int a[], int n)
{
    sort(a, a + n);
    int sum = 1;
    for (int i = 0; i < n; i++)
    {
        sum += a[i] * i;
    }
    return sum;
}
int main()
{
    vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8, 10};
    // for(auto i : v) cout << i <<" ";
    int arr[] = {1, 3, 4, 2, 5};
    cout << Maximize(arr, 5);
    // for (int i = 0; i < 5; i++)
        // cout << arr[i] << " ";
    return 0;
}