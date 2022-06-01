#include <iostream>

using namespace std;

int main()
{
    int t=0,i;
    cin>>t;
    for(i=0;i<t;i++)
    {
        int a=0,b=0;
        cin>>a;
        cin>>b;
        if(a>0 && b>0)
        {
            cout<<"Solution"<<endl;
        }
        else if(b==0)
        {
            cout<<"Solid"<<endl;
        }
        else if(a==0)
        {
            cout<<"Liquid"<<endl;
        }
    }
    return 0;
}
