#include<bits/stdc++.h>
using namespace std;
int a = -1, b = 1, f = 0;
int i = 0;
vector <int> v ;
vector<int> generateFibonacciNumbers(int n) {
    if(i < n)
    {
      f = a + b;
      a = b;
      b = f;
      v.emplace_back(f);
      i++;
      generateFibonacciNumbers(n);
    }
   return v;
}
int main()
{
    vector<int> v1 = generateFibonacciNumbers(3);
    for(auto i : v1)
        cout << i <<" ";
    return 0;
}