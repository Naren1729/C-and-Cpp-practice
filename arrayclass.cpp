#include <iostream>

using namespace std;
template<class T>

class Array
{
private:
    T *a;
    int Size;
    int length;
public:
    Array()
    {
        Size = 10;
        a = new T[10];
        length = 0;
    }
    Array(int sz)
    {
        Size = sz;
        a = new T[Size];
        length = 0;
    }
    ~Array()
    {
        delete []a;
    }
    void display();
    void Insert(int index, T x);
    T Delete(int index);
};
template<class T>
void Array<T> :: display()
{
    for (int i=0;i<length;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
template<class T>
void Array <T>:: Insert(int index, T x)
{
    if(index>=0 && index <=length)
    {
        for (int i = length-1;i>=index;i--)
        {
            a[i+1] = a[i];
        }
        a[index] = x;
        length ++;
    }
}
template<class T>
T Array <T>::Delete(int index)
{
    T x = 0;
    if(index>=0 && index<length)
    {
       x = a[index];
       for(int i =index ;i<length-1;i++)
       {
          a[i] = a[i+1];
       }
       length --;

    }
    return x;
}
int main()
{
    Array<char> arr(10);
    arr.Insert(0,'a');
    arr.Insert(1,'b');
    arr.Insert(2,'c');
    arr.display();
    cout<<arr.Delete(2)<<endl;
    arr.display();
    return 0;
}
