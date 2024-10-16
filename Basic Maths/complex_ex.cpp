#include <bits/stdc++.h>
using namespace std;
class Complex
{
private:
    int real_number;
    int imaginary_number;

public:
    inline void setData(int i, int j)
    {
        real_number = i;
        imaginary_number = j;
    }
    inline void getData()
    {
        cout << real_number << "+" << imaginary_number << "i";
    }
};
class Time
{
private:
    int seconds;
    int minutes;
    int hours;

public:
    inline void setTime(int h, int m, int s)
    {
        seconds = s;
        minutes = m;
        hours = h;
    }
    inline void getTime()
    {
        cout << hours << ":" << minutes << ":" << seconds;
    }
};
int main()
{
    Complex c;
    int i, j;
    cout << "Enter complex number real and imaginary part: ";
    cin >> i >> j;
    c.setData(i, j);
    c.getData();
    cout << endl;
    Time t;
     t.setTime(12,04,10);
     t.getTime();
    return 0;
}