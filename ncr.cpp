#include <iostream>

using namespace std;
int fact(int n)
{
    if (n==0)
    {
        return 1;
    }
    return fact(n-1)*n;
}
int ncr(int n, int r)
{
    int num = 0,den = 0;
    num = fact(n);
    den = fact(n-r)*fact(r);
    return num/den;
}
int ncr1(int n,int r)
{
    if(n==r || r==0)
    {
        return 1;
    }
    return ncr1(n-1,r-1) +ncr1(n-1,r);
}
int main()
{
    cout <<ncr1(10,2) << endl;
    return 0;
}
