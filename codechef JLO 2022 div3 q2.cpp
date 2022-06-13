#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
   int t=0;
   cin>>t;
   for(int i=0;i<t;i++)
   {
       int a=0,b=0,x=0;
       cin>>a>>b;
       x = abs(a-b);
       x = x-2;
       if(x%3 == 0)
       {
           cout<<"NO"<<endl;
       }
       else{
        cout<<"YES"<<endl;
       }


   }
    return 0;
}
