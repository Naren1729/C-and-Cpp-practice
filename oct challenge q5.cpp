#include <iostream>
#include<stdio.h>
using namespace std;

int main()
{
    int t=0,d=0,c=0;
    long long int n=0;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>n;
        cin>>d;
        int c= 0;
        int p= 0;
        while (p!=1)
        {

           int k = n+c;
            while(k>0)
            {
                int rem = k%10;
                 k =k/10;

                if(rem == d)
                {

                    c = c+1;
                    break;
                }
            }
            if(k==0)
            {
                p = 1;

            }

        }
        cout<<c<<endl;

    }
    return 0;
}
