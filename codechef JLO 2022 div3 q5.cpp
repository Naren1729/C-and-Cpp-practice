#include <iostream>
#include <cstdlib>

#include <string>
using namespace std;
int compare(int c[],int b,int l)
{
    for(int i=0;i<l;i++)
    {
        if(c[i] == b)
        {

            return 1;
        }
    }
    return 0;
}
int gcd(int a, int b)
{
    // Everything divides 0
    if (a == 0)
       return b;
    if (b == 0)
       return a;

    // base case
    if (a == b)
        return a;

    // a is greater
    if (a > b)
        return gcd(a-b, b);
    return gcd(a, b-a);
}
int main()
{
    int t=0;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int a=0,b=0,x=0,y=0,cou=0,p=0,q=0;
        cin>>a>>b;
         x = abs(a-b);
         int c[x] = {0};
         for(int j=0;j<x;j++)
         {
             p = a+j;
             q = b+j;
             y = gcd(p,q);
            // cout<<gcd(p,q)<<" ";
             if(compare(c,y,j) == 1)
             {
                 c[j] = 0;
                 cou++;

             }
             else
             {
                 c[j] = y;
             }
//cout<<endl;

         }
     /*   int j=0;
        while(x>0)
        {
           if(c[j]>0)
           {
              cou++;
           }
           j++;
           x--;
        }
*/
       cout<<x-cou<<" "<<endl;
      /*  for(int j=0;j<x;j++)
        {
            cout<<c[j]<<" ";
        }
*/

    }
    return 0;
}
