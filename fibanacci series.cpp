#include <iostream>

using namespace std;
int F[10];
int fib1(int n )
{
    if (n<=1)
    {
        F[n] = n;
        return n;
    }
    else{
        if(F[n-1] == -1)
        {
            F[n-1] = fib1(n-1);
        }
        if(F[n-2] == -1)
        {
            F[n-2] = fib1(n-2);
        }
        return F[n-1] +F[n-2];
    }
}
int fib2(int n)
{
    int t1 =0 , t2 = 1, f = 0;
    if(n<=1)
    {
        return n;
    }
    for(int i=1;i<n;i++)
    {
        f = t1+t2;
        t1 = t2;
        t2 = f;
    }
    return f;

}
int fib(int n)
{
    if(n<=1)
    {
        return n;
    }
    return fib(n-1) + fib (n-2);
}
int main()
{
     for(int i = 0;i<=10;i++)
     {
         F[i] = -1;
     }

    for(int i = 0;i<=10;i++)
    {
       cout << fib(i)<< endl;
    }
    for(int i = 0;i<=10;i++)
     {
         cout<<F[i];
     }

    return 0;
}
