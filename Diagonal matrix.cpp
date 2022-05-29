#include <iostream>

using namespace std;
class diagonal
{
private:
    int n;
    int *a;

public:
    diagonal(int n)
    {
        this->n = n;
        a = new int[n];
    }
    void set(int i, int j , int x);
    int get(int i , int j);
    void display();
    ~diagonal()
    {
        delete []a;
    }

};
void diagonal :: set(int i,int j, int x)
{
    if(i==j)
    {
        a[i] = x;
    }
}
int diagonal :: get(int i, int j)
    {
        if(i==j)
        {
            return a[i-1];
        }
        else{
            return 0;
        }
    }

void diagonal :: display()
{

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==j)
            {
                cout<<a[i]<<" ";
            }
            else
            {
                cout<<"0 ";
            }
        }
        cout<<endl;
    }
}
int main()
{
    cout<<"enter the dimension : "<<endl;
    int n =0;
    cin>>n;
    diagonal d(n);
    int i =0,j=0,x=0;
    cout<<"enter all the elements : "<<endl;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
           cin>>x;
           d.set(i,j,x);
        }
    }

    d.display();
    //cout<<d.get(2,2)<<endl;

    return 0;
}
