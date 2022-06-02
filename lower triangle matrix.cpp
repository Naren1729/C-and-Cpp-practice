#include <iostream>

using namespace std;
class lower_triangle
{
private:
    int n;
    int *a;
public:
    lower_triangle(int n)
    {
        this->n = n;
        a = new int[n*(n+1)/2];
    }
    void set(int i,int j, int x);
    int get(int i , int j );
    void display();
    ~lower_triangle()
    {
        delete []a;
    }

};
void lower_triangle :: set(int i, int j , int x)
{
    if(j<=i)
    {
        a[(i*(i-1)/2)+(j-1)] = x;
    }

}
int lower_triangle :: get (int i,int j)
{
     if(j<=i)
    {
         return a[(i*(i-1)/2)+(j-1)] ;
    }
    else
    {
        return 0;
    }
}
void lower_triangle ::display()
{

    for(int i=1;i<=n;i++)
    {
            for(int j=1;j<=n;j++)
            {
                if(j<=i)
                {
                     cout<<a[(i*(i-1)/2)+(j-1)]<<" " ;
                }
                else
                {
                    //cout<<a[(j*(j-1)/2)+(i-1)]<<" ";
                    cout<<"0 ";
                }
            }
            cout<<endl;
    }
}

int main()
{
    int n =0,x=0;
    cout<<"enter the dimension :"<<endl;
    cin>>n;
    lower_triangle d(n);
    for(int i =1;i<=n;i++)
    {
        for(int j =1; j<=n;j++)
        {
            cin>>x;
            d.set(i,j,x);
        }
    }
    d.display();

    return 0;
}
