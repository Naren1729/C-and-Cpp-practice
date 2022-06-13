#include <iostream>

using namespace std;

int main()
{
    int t=0;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int f=0,c=0,x=0;
        cin>>f>>c;
        if(f%6 == 0)
        {
          x = f/6;
        }
        else
        {
            x = f/6 +1;
        }
        cout<<x*c<<endl;
    }
    return 0;
}
