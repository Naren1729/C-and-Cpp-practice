#include <iostream>

using namespace std;

int toh(int t, int a, int b, int c)
{
    if(t>0)
    {
        toh(t-1,a,c,b);
        cout<<a<<" to "<<c<<endl;
        toh(t-1,b,a,c);
    }
}
int main()
{
    toh(3,1,2,3);
    return 0;
}
