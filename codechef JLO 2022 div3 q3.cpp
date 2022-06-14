#include <iostream>
#include <string>

#include<bits/stdc++.h>
using namespace std;
/*int compare(string c, char b,int l)
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
int main()
{
    int t=0;
    cin>>t;
    for(int i =0;i<t;i++)
    {
        int l=0,cou=0;
        cin>>l;
        char a[l];
        char b[l];
        cin>>a;
        cin>>b;
       // char c[l];




        for(int j=0;j<l;j++)
        {
            if(a[j]==b[j])
            {
                b[j] = '0';
                continue;
               // c[j] = b[j];
            }
            else if(a[j] != b[j])
            {
               if(compare(b,b[j],j) == 1)
               {
                   continue;
                  // c[j] = b[j];
               }
               else
               {
                   cou++;
                  // c[j] = b[j];
               }
            }


        }

        cout<<cou<<endl;



    }
    return 0;
} */
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n,x,y,i,k,co=0;
        cin>>x>>y;
        n = abs(x-y);
        for(i=1;i<=sqrt(n);i++)
        {
            if(n%i==0)
            {
                if(n/i==i)
                {
                    co+=1;
                }
                else
                {
                    co+=2;
                }
            }
        }
        cout<<co<<endl;
    }
}
