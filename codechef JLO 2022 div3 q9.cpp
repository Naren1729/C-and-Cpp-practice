#include <iostream>


using namespace std;

int main()
{
   long long int n=0,k=0,j=0,i=0;
    long long int x=0,y=0;
    cin>>n>>k;

  long long  int a[n+1][k+2] = {0};
   long long  int p[n]= {0};
   a[0][0] = 0;
   p[0] = 0;
     for(j=1;j<=n;j++)
        {
            cin>>a[1][j];
        }

    for( i=1;i<=n;i++)
        {
            cin>>p[i];
        }

        x =2;

        while(k>0)
        {
        for( j=1;j<=n;j++)
                {
                    y = p[j];
                    a[x][j] = (a[x-1][j] + a[x-1][y])%998244353;

                }
                x++;
                k--;
        }
      for( j=1;j<=n;j++)
        {
            cout<<a[x-1][j]<<" ";
        }

    cout<<endl;
    return 0;
}
