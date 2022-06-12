#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int t=0;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int a=0,b=0,k=0;
        cin>>a;
        cin>>b;
        if(a%3 ==0 || b%3 ==0)
        {
            cout<<k<<endl;
        }
        else {

            while(a%3 != 0 && b%3 != 0)
            {
               if(a>b)
               {
                   a = abs(a-b);
                   k++;

               }
               else
               {
                   b = abs(a-b);
                   k++;
               }

            }
            cout<<k<<endl;
        }

    }

    return 0;
}
