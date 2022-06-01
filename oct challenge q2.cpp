#include <iostream>

using namespace std;

int main()
{
   int t=0;
   cin>>t;
   for(int i=0;i<t;i++)
   {
        int a[4];
        for(int j=0;j<4;j++)
        {
            cin>>a[j];
        }
        if(a[0] + a[1]<= a[3])
        {
            if(a[0] + a[1] == a[3])
            {
                cout<<"2"<<endl;
            }
            else if(a[0] + a[1] < a[3])
            {
                if(a[0] + a[1]+ a[2]<= a[3])
                {
                    cout<<"1"<<endl;
                }
                else
                {
                    cout<<"2"<<endl;
                }
            }

        }
         if(a[0] + a[1] > a[3])
         {
             if(a[1] + a[2] <= a[3])
             {
                 cout<<"2"<<endl;
             }
             else if(a[1] + a[2] > a[3])
             {
                 cout<<"3"<<endl;
             }

         }


   }
     return 0;
}
