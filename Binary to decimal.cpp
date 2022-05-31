#include <iostream>

using namespace std;

int binarytodecimal( int n)
{
    int ans =0;
    int x =1;
    while(n>0)
    {
        int y = n%10;
        ans = ans+ x*y;
        x= x*2;
        n = n/10;

    }
    return ans;
}

int main()
{
    int n;
    cout << "enter the number in binary format: " << endl;
    cin>>n;
    int ans = binarytodecimal(n);
    cout<<ans<<endl;
    return 0;
}
