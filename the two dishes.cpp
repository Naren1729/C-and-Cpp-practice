#include <iostream>

using namespace std;

int main()
{
    int t=0,n=0,i=0,s=0;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>n;
        cin>>s;
        if(n>=s)
        {
            cout<<s<<endl;
        }
        else if(n<s)
        {
            cout<<2*n - s<<endl;
        }
    }
    return 0;
}
