#include <iostream>

using namespace std;

int main()
{
    int n=0,c=0,t=0;
    cin>>n;
    int a[n];
    cin>>t;
    int i;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%t == 0)
        {
            c= c +1;
        }
        else
        {
            continue;
        }
    }
    cout<<c<<endl;
    return 0;
}
