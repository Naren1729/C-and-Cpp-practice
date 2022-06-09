#include <iostream>

using namespace std;
class node
{
public:
    int data;
    node *next;
}*first=NULL,*second = NULL, *third = NULL;
class linkedlist
{
public:
    void display(node *p);
    void create1(int a[],int n);
    void create2(int a[],int n);
    int length(node *p);
    int issorted(node *p);
    void removeduplicate(node *p);
    void reverse1(node *p);
    void reverse2(node *p);
    void reverse3(node *q,node *p );
    void concat(node *p,node *q);
    void mergeing(node *p,node *q);
    int  isloop(node *f);
};
void linkedlist::display(node *p)
{
    while(p!=0)
    {
        cout<<p->data<<" ";
        p=p->next;
    }
}
int linkedlist::length(node *p)
{
    int len=0;
    while(p!=0)
    {
        len = len +1;
        p=p->next;
    }
    return len;
}
void linkedlist::create1(int a[],int n)
{
    node *t,*last;
    int i;
    t = new node();
    t->data = a[0];
    t->next = NULL;
    first = t;
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
void linkedlist::create2(int a[],int n)
{
    node *t,*last;
    int i;
    t = new node();
    t->data = a[0];
    t->next = NULL;
    second = t;
    last = second;
    for(i=1;i<n;i++)
    {
        t = new node();
        t->data = a[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}
int linkedlist::issorted(node *p)
{
    int x = INT_MIN;
    while(p!=0)
    {
        if(p->data <x)
        {
            return 0;
        }
        x=p->data;
        p=p->next;
    }
    return 1;
}
void linkedlist::removeduplicate(node *p)
{
    node *q = p->next;
    while(q!=NULL){
    if(p->data != q->data)
    {
        p = q;
        q = q->next;
    }
    else{
        p->next = q->next;
        delete q;
        q = p->next;
    }
    }

}
void linkedlist::reverse1(node *p)
{
    int *a,i=0;
    node *q;
    q=p;
    a = new int[length(p)];
    while(q!=0)
    {
        a[i] = q->data;
        q = q->next;
        i++;
    }
    q = p;
    i--;
    while(q!=0)
    {
        q->data = a[i];
        q= q->next;
        i--;
    }


}
void linkedlist::reverse2(node *p)
{
    node *q=NULL,*r=NULL;
    while(p!=0)
    {
        r=q;
        q=p;
        p=p->next;
        q->next = r;
    }
    first=q;
}
void linkedlist::reverse3(node *q,node *p )
{
    if(p)
    {
        reverse3(p,p->next);
        p->next=q;
    }
    else
    {
        first = q;
    }

}
void linkedlist::concat(node *p,node *q)
{
    third = p;
    while(p->next!=0)
    {
        p=p->next;
    }
    p->next = q;
}
void linkedlist::mergeing(node *p,node *q)
{
    node *last;
    if(p->data < q->data)
    {
        third=last=p;
        p=p->next;
        third->next = NULL;
    }
    else{
        third = last = q;
        q= q->next;
        third->next = NULL;
    }
    while(p && q)
    {
        if(p->data < q->data)
        {
          last->next = p;
          last = p;
          p=p->next;
          last->next=NULL;
        }
        else
        {
            last->next = q;
            last = q;
            q=q->next;
            last->next=NULL;
        }

    }
    if(p)
    {
        last->next = p;
    }
    if(q)
    {
        last->next = q;
    }
}
int linkedlist:: isloop(node *f)
{
    node *p, *q;
    p=q=f;
    do
    {
      p=p->next;
      q=q->next;
       q=q?q->next:q;
    }while(p&&q && p!=q);
    if(p==q)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    linkedlist list1;
    node *t1,*t2;
    int a[] = {10,20,30,40,50};
    list1.create1(a,5);
    t1=first->next->next;
    t2=first->next->next->next->next;
    t2->next=t1;
    cout<<list1.isloop(first);










    return 0;
}
