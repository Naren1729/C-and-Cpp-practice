#include <iostream>

using namespace std;

int main()
{
    int t =0;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n=0,x=0,y=0;
        cin>>n>>x>>y;
        int s=0,p=0;
        int a[n] = {0};
        for(int j=0;j<n;j++)
        {
            cin>>a[j];
        }
        for(int k=0;k<n;k++)
        {
            p = p +a[k];
            if(a[k]>y)
            {
             a[k] = a[k] - y;
            }
            else if(a[k]<=y)
            {
                a[k] = 0;
            }

            s = s +a[k];
        }
        if((s+x)<p)
        {
            cout<<"COUPON"<<endl;
        }
        else{
            cout<<"NO COUPON"<<endl;
        }


    }
    return 0;
}
