#include <iostream>

using namespace std;

int main()
{
    int row,coloum;
    int i,j;
    cout<<"enter number of rows";
    cin>>row;
    cout<<"enter number of coloums";
    cin>>coloum;
    for(i=1;i<=row;i++)
    {
        for(j=1;j<=coloum;j++)
        {
            if(i==1 || i==row)
            {
                cout<<"*";
            }
            else if(j==1 ||j==coloum)
            {
                cout<<"*";
            }
            else{
                cout<<" ";
            }


        }
        cout<<endl;
    }
    return 0;
}
