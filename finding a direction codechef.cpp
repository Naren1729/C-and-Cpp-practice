#include <iostream>

using namespace std;

int main()
{
    int n=0,t=0;
    int i;
    cin>>t;
    for(i=0;i<t;i++)
    {
       cin>>n;
       if(n==1)
       {
           cout<<"east"<<endl;
       }
         else if(n==3)
       {
           cout<<"west"<<endl;
       }
       else if( n%2 == 0 && n%4 != 0)
       {
           cout<<"south"<<endl;
       }
       else if(n%4 == 0)
       {
           cout<<"north"<<endl;
       }
       else if((n-1)%4 == 0)
       {
           cout<<"east"<<endl;
       }
        else if((n-3)%4 == 0)
       {
           cout<<"west"<<endl;
       }


    }
    return 0;
}
