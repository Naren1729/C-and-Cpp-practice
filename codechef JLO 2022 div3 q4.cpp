#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int t=0;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int l=0;
        cin>>l;
      int  a[l+1] = {0};
        a[l] = l;
        //a[l-1] = 1;
       // a[l-2] = l-1;


            for(int j = l-1;j>0;j--)
            {
                    int x = (j)%2;
                    if(l%2==0)
                    {
                        if(x == 0)
                        {
                            a[j] = abs(j + a[j+1]);
                        }
                        else
                        {
                            a[j] = abs(j - a[j+1]);
                        }
                    }
                    else
                    {
                        if(x == 0)
                        {
                            a[j] = abs(j - a[j+1]);
                        }
                        else
                        {
                            a[j] = abs(j + a[j+1]);
                        }
                    }
                }





         for(int j=1;j<=l;j++)
         {
             cout<<a[j]<<" ";
         }
    }


    return 0;
}
