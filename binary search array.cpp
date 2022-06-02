#include <iostream>
int Binary_search(int l,int h,int key ,int arr[] );

using namespace std;

int Binary_search(int l,int h,int key ,int arr[] )
{
    int mid = 0;
    while(l<=h)
    {
        mid = (l+h)/2;
        if(key == arr[mid])
        {
            return mid;
        }
        else if (key < arr[mid])
        {
            h = mid - 1;
        }
        else
        {
            l = mid + 1;
        }

    }
    return -1;
}
int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    cout<<Binary_search(0,9,1, arr);
    //cout << "Hello world!" << endl;
    return 0;
}
