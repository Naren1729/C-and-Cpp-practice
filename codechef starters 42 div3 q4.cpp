#include <iostream>

using namespace std;

int main()
{

   int t=0;
   cin>>t;
   for(int i=0;i<t;i++)
   {
       int n=0,j=0;
       cin>>n;
       int b[n] = {0};
       for( j=0;j<n;j++)
       {
           cin>>b[j];
       }
       if(n<=2)
       {
           cout<<"YES"<<endl;
       }
       else{
            int max1,min1;
            if(b[0]>=b[1])
            {
                max1=b[0];
                min1=b[1];
            }
            else{
                min1=b[0];
                max1 = b[1];

            }

            for( j=2;j<n;j++)
            {
              if(b[j]>=max1 )
              {
                 max1 = b[j];
              }
              else if(b[j]<= min1)
              {
                  min1 = b[j];
              }
              else if(b[j]<max1 || b[j]>min1)
              {
                cout<<"NO"<<endl;
                break;
              }
            }
            if(j==n)
            {
              cout<<"YES"<<endl;
            }
       }
   }
    return 0;
}
