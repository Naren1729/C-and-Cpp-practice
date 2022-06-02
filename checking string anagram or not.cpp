#include <iostream>

using namespace std;

int main()
{
    char a[] = "decimal";
    char b[] = "medical";
    int i =0,j=0;
    int h[26] ={0};
    for (i=0;a[i]!='\0';i++ )
    {
        h[a[i]-97]= h[a[i]-97]+1;
    }
    for (i=0;b[i]!='\0';i++ )
    {
        h[b[i]-97]= h[b[i]-97]-1;
        if(h[b[i]-97]<0)
        {
            cout<<"it is not an anagram"<<endl;
            break;
        }
    }
    for(i=0;i<26;i++)
    {
        if(h[i]==0)
        {
            j++;
        }
    }
    if(j==26)
    {
        cout<<"it is an anagram"<< endl;
    }

    return 0;
}
