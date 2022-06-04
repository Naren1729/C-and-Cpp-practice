#include <iostream>

using namespace std;

int main()
{
    int t=0,n=0;
    cin>>t;
    int i=0,j=0,k=0;
    for(i=0;i<t;i++)
    {
        cin>>n;
        int a[n][n];
        if(n%2== 0)
        {

            for(j=0;j<n;j++)
            {
                for(k=0;k<n;k++)
                {
                    a[j][k] = -1;
                    cout<<a[j][k]<<" ";
                }
                cout<<endl;
            }
        }
        else
        {
            for(j=0;j<n;j++)
            {
                for(k=0;k<n;k++)
                {
                    if(j==k)
                    {
                         a[j][k] = -1;
                    }
                    else{
                        a[j][k] = 1;
                    }
                    cout<<a[j][k]<<" ";
                }
                cout<<endl;
            }
        }
    }
    return 0;
}
