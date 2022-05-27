#include <iostream>
#include <bits/stdc++.h>
using namespace std;
//this is for sorted array
/*int main()
{
    int i = 0;
    int a[] = {3,5,6,7,8,11,12};
    int diff = a[0];
    int s = sizeof(a)/sizeof(a[0]);
    for( i=0;i<s;i++)
    {
        if(a[i] - i != diff)
        {
           while(diff<a[i]-i)
           {
               cout<<i+diff<<endl;
               diff++;
           }
        }

    }


    return 0;
}
*/
//this method takes lots of space for larger comparisons since it creates new array
//this is for unsorted array
int main()
{
    int a[] = {1,4,3,5,2,9,10,6};
    int s = sizeof(a)/sizeof(a[0]);
    int m = *max_element(a,a+s);

    int n[m] = {0};
    int i =0;
    for (i= 0;i<s;i++)
    {
        n[a[i]]++;

    }
   // for(i=0;i<m;i++)
    //{
      //  cout<<n[i]<<endl;
    //}
    for (i= 1;i<m;i++)
    {
        if(n[i] == 0)
        {
            cout<<"missing number is : " <<i<< endl;
        }

    }

}
