#include <iostream>

using namespace std;
void swap(int *x,int *y)
{
 int temp=*x;
 *x=*y;
 *y=temp;
}
int partition1(int a[],int l,int h)
{
    int pivot = a[l];
    int i=l,j=h;
    do
    {
        do{i++;}while(a[i]<=pivot);
        do{j--;}while(a[j]>pivot);
        if(i<j)
        {
            swap(&a[i],&a[j]);
        }
    }while(i<j);

    swap(&a[l],&a[j]);

    return j;
}
void quicksort(int a[], int l, int h)
{
    int j =0;
    if(l<h)
    {
        j = partition1(a,l,h);
        quicksort(a,l,j);
        quicksort(a,j+1,h);
    }

}
int main()
{
    int a[] = {2,23,45,1,23,555,3,123,INT_MAX},n=9,i;
    quicksort(a,0,n);
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    quicksort(a,0,n);
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }

    return 0;
}
