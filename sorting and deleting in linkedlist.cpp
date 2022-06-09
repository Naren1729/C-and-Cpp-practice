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
    void display(node *p);
    void create(int a[],int n);
    void sortedinsert(node *p,int x);
    int length(node *p);
    int delete1(node *p, int index);

};
void linkedlist::display(node *p)
{
    while(p !=0)
    {
        cout<<p->data<<" ";
        p=p->next;
    }
}
void linkedlist::create(int a[],int n )
{
    int i;
    node *t,*last;
    first = new node();
    first->data = a[0];
    first->next = NULL;
    last = first;
    for(i=1;i<n;i++)
    {
        t = new node();
        t->data = a[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }

}
void linkedlist::sortedinsert(node *p,int x)
{
    node *t,*q=NULL;
    t = new node();
    t->data = x;
    t->next = NULL;
    if(first==NULL)
    {
        first = t;
    }
    else{
        while(p && p->data<x)
        {
            q=p;
            p=p->next;
        }
        if(p==first)
        {
           t->next=first;
           first = t;
        }
        else{
            t->next = q->next;
            q->next = t;
        }

    }

}
int linkedlist::length(node *p)
{
    int l=0;
    while(p!=0)
    {
        l = l+1;
        p= p->next;
    }
    return l;
}
int linkedlist::delete1(node *p, int index)
{
    node *q;
    int x = -1,i;
    if(index<1 || index>length(p))
    {
      return -1;
    }
    if(index == 1)
    {
        q = first;
        x = first->data;
        first=first->next;
        delete q;
        return x;
    }
    else{
       for(i=0;i<index-1;i++)
       {
           q=p;
           p = p->next;
       }
       q->next = p->next;
       x = p->data;
       delete p;
       return x;
    }
}

int main()
{
    linkedlist list1;
    int a[] = {1,2,3,4,5};
    list1.create(a,5);
    list1.sortedinsert(first,55);
    list1.sortedinsert(first,22);
    list1.display(first);
    cout<<endl;
    cout<<list1.length(first);
    cout<<endl;
    cout<<list1.delete1(first,6)<<" "<<endl;
    list1.display(first);

    return 0;
}
