#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int t=0;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n=0,y=0;
        cin>>n;
        int a[n] = {0};
        for(int j=0;j<n;j++)
        {
            cin>>a[j];
        }
        if(n%2 != 0)
        {
            cout<<-1<<endl;

        }
        else
        {
            int sum=0;
            for(int j=0;j<n;j++)
            {
                sum = sum + a[j];
            }
            if(sum%2 == 0)
            {
                y = abs(sum/2);
                cout<<y<<endl;

            }

        }

    }
    return 0;
}
