#include <iostream>

using namespace std;
class node
{
public:
    int data;
    node *next;
}*first;

class linkedlist
{
public:
    void creat(int a[],int n);
    void sum(node *p);
    int max_ele(node *p);
    node* searchl(node *p, int x);

};
void linkedlist::creat(int a[],int n)
{
    int i ;
    node *t,*last;
    first = new node();
    first->data=a[0];
    first->next= NULL;
    last = first;
    for(i=1;i<n;i++)
    {
        t = new node();
        t->data=a[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }
}
void linkedlist::sum(node *p)
{
    int sum =0;
    while(p != 0)
    {
        sum = sum + p->data;
        p = p->next;
    }
     cout<<sum<<" "<<endl;
}
int linkedlist::max_ele(node *p)
{
    int maxele = INT_MIN;
    while(p != 0)
    {
        if(p->data > maxele)
        {
            maxele = p->data;

        }
        p = p->next;
    }
    return maxele;
}
node* linkedlist::searchl(node *p, int x)
{
    node *q = NULL;
    while(p!= 0)
    {
        if(p->data == x )
        {
            cout<<x<<" present in the list"<<endl;
            cout<<"its address is :";
            q->next = p->next;
            p->next = first;
            first = p;
            return p;//
            break;
        }
        q=p;
        p = p->next;
    }
    if(p==0)
    {
       return NULL; //cout<<x<<" it is not present in the list"<<endl;
    }

}
int main()
{
     linkedlist list1;
    int a[]= {1,2,3,20,5,6,7,8,9,10};
    list1.creat(a,10);
    cout<<endl;
    list1.sum(first);
    cout<<endl;
    int y = list1.max_ele(first);
    cout<<y<<" "<<endl;
    cout<<endl;
    cout<<list1.searchl(first,4);

    return 0;
}
