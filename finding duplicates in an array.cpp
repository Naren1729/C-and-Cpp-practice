#include <iostream>

using namespace std;
//for sorted array
/*  int main()
{
    int a[] = {1,2,2,4,4,5,6,8,8,8};
    int s = sizeof(a)/sizeof(a[0]);
    int last_duplicate = 0;
    int i =0,j=0;
    for (i=0;i<s;i++)
    {
        if(a[i] == a[i+1] && a[i] != last_duplicate)
        {
           cout<<a[i]<<endl;
           last_duplicate = a[i];
        }
    }
    for (i=0;i<s;i++)
    {
        if(a[i] == a[i+1])
        {
            j= i+1;
            while(a[i] == a[j])
            {
                j++;
            }
            cout<< a[i] << " is present " << j-i << " times " <<endl;
            i = j-1;

        }
    }

} */
int main()
{
    int a[] = {1,4,2,3,5,7,2,8,3,2,8};
   int  s = sizeof(a)/sizeof(a[0]);

    int i =0,j=0;
    for(i=0;i<s;i++)
    {
        int cnt = 1;
        if(a[i] != -1)
        {
            for(j= i+1;j<s;j++)
            {
                if (a[i] == a[j])
                {
                    cnt++;
                    a[j] = -1;
                }
            }
            cout<< a[i]<< " is repeated "<< cnt << " times "<<endl;
        }

    }

}
