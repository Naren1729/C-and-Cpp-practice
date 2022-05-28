#include <iostream>

using namespace std;

int main()
{
    int t=0;
    cin>>t;
    for(int i =0;i<t;i++)
    {
        int q =0;
        cin>>q;

        int a[q] = {0};
        a[q] = 10000;
        for(int j=0;j<q;j++)
        {
            cin>>a[j];
        }
        for(int k=0;k<q;k++)
        {
            if(a[k]>a[k+1])
            {
               cout<<"No"<<endl;
               break;
            }
            else if(k == q-1)
            {
               cout<<"Yes"<<endl;
            }
        }

    }
    return 0;
}
