#include<iostream>
using namespace std;
int main()
{
    int num = 1011000;
    int rem, deci = 0, multi = 1;
    //binary to decimal
    while (num)
    {
       rem = num % 10;
       num = num / 10;
       deci = rem * multi + deci;
       multi = multi * 2;
    }
    //decimal to octal
    rem = 0, multi = 1, num = deci;
    int oct = 0;
    while (num)
    {
        rem = num % 8;
        num = num / 8;
        oct = rem * multi + oct;
        multi = multi * 10;
    }
    cout<<oct;
    
    return 0;
}