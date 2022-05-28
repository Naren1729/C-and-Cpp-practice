#include <iostream>
#include <stdio.h>


using namespace std;
int main()
{
    int t =0 ;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n =0,q,j=0;
        cin>>n;
        n = n-1;
        while(n>0)
        {
         /*   switch(true)
            {
            case (q !=3 && (n-3)>=0 ) :
                n = n-3;
                q = 3;
                j++;
                break;
            case (q !=2 && (n-2)>=0 ) :
                 n = n-2;
                 q = 2;
                 j++;
                 break;
            case (q !=1 && (n-1)>=0 ) :
                n = n-1;
                q = 1;
                j++;
                break;
            default :
                break; */

          if(q !=3 && (n-3)>=0 )
           {
               n = n-3;
               q = 3;
               j++;
           }
           else if(q !=2 && (n-2)>=0 )
           {
               n = n-2;
               q = 2;
               j++;
           }
           else if(q !=1 && (n-1)>=0 )
           {
               n = n-1;
               q = 1;
               j++;
           }
        }
        cout<<j<<endl;
    }
    return 0;
}


