#include <bits/stdc++.h>
using namespace std;
// Monotonic Increasing Stack
stack<int> Mono_Inc(vector<int> v)
{
    stack<int> st;
    for (auto i : v)
    {
        while (!st.empty() && st.top() > i)
            st.pop();
        st.push(i);
    }
    return st;
}
// Monotonic Decreasing Stack
stack<int> Mono_Dec(vector<int> v)
{
    stack<int> st;
    for (auto i : v)
    {
        while (!st.empty() && st.top() < i)
            st.pop();
        st.push(i);
    }
    return st;
}
// Monotonic Stack --> Monotonic Array / Vector Increasing
vector<int> Mono_vec_arr_inc(vector<int> v)
{
    vector<int> arr;
    for (auto i : v)
    {
        while (!arr.empty() && arr.back() > i)
            arr.pop_back();
        arr.emplace_back(i);
    }
    return arr;
}
// Monotonic Stack --> Monotonic Array / Vector Decreasing
vector<int> Mono_vec_arr_dec(vector<int> v)
{
    vector<int> arr;
    for (auto i : v)
    {
        while (!arr.empty() && arr.back() < i)
            arr.pop_back();
        arr.emplace_back(i);
    }
    return arr;
}
int main()
{
    vector<int> v = {1, 7, 9, 5, 8, 7, 6};
    stack<int>st;
    st = Mono_Inc(v);
    while(!st.empty())
    {
        cout<<st.top()<<" ";
        st.pop();
    }
    cout<<endl;
    st = Mono_Dec(v);
    while(!st.empty())
    {
        cout<<st.top()<<" ";
        st.pop();
    }
    cout<<endl;
    vector<int>ans;
    ans = Mono_vec_arr_inc(v);
    for(auto i: ans)cout<<i<<" ";
    cout<<endl;
    ans = Mono_vec_arr_dec(v);
    for(auto i: ans)cout<<i<<" ";
    return 0;
}