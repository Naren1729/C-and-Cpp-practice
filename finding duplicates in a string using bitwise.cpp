#include <iostream>

using namespace std;

int main()
{
    char a[] = "finding";
    int h = 0;
    int i =0;
    for(i=0;a[i] != '\0';i++)
    {
        int x =1;
        x= x<<(a[i]-97);
        if((x&h) >0 )
        {
            cout<<a[i]<< " it is duplicate "<<endl;

        }
        else
        {
            h = x|h;
        }
    }

    return 0;
}
