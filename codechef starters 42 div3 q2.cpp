#include <iostream>

using namespace std;

int main()
{
    int t=0;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n=0,k=0;
        cin>>n;
        char s[n-1];
        cin>>s;
        for(int j=0;j<n-2;j++)
        {
            if(s[j]=='1' && s[j+1] == '0')
            {
                k=k+1;
            }

        }
        cout<<k+1;


    }
    return 0;
}
