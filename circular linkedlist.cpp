#include <iostream>

using namespace std;
class node
{
public:
    int data;
    node *next;
}*head;

class linkedlist
{
public:
void create(int a[],int n);
void display(node *h);
void insert1(int index,int x, node *p);
int length(node *p);
int delete1(node *p,int index);
};
void linkedlist::create(int a[],int n)
{
    int i;
    node *t,*last;
    head= new node();
    head->data = a[0];
    head->next = head;
    last = head;

    for(i=1;i<n;i++)
    {
        t=new node();
        t->data = a[i];
        t->next = last->next;
        last->next = t;
        last= t;
    }
}
int linkedlist::length(node *p)
{
    int len =0;
    do
    {
        len++;
        p=p->next;
    }while(p!=head);
    return len;
}
void linkedlist::display(node *h)
{
    do
    {
        cout<<h->data<<" ";
        h=h->next;
    }while(h!=head);
}
void linkedlist::insert1(int index,int x, node *p)
{
   node *t;
   int i;
    if(index <0 || index>length(p))
    {
        return;
    }
   if(index==0)
   {
       t= new node();
       t->data = x;
       if(head == NULL)
       {
           head = t;
           head->next= head;
       }
       else{
        while(p->next != head)
        {
            p=p->next;
        }
        p->next = t;
        t->next = head;
        head = t;
       }
   }
   else{
    for(i=0;i<index-1;i++)
    {
        p=p->next;
    }
    t = new node();
    t->data = x;
    t->next = p->next;
    p->next = t;

   }

}
int linkedlist::delete1(node *p,int index)
{
    node *q;
    int i,x;
    if(index <0 || index > length(head))
    {
        return -1;
    }
    if(index==1)
    {
        while(p->next != head)
        {
            p=p->next;
        }
        x = head->data;
        if(head==p)
        {
            delete head;
            head = NULL;
        }
        else{
            p->next = head->next;
            delete head;
            head = p->next;
        }
    }
    else{
        for(i=0;i<index-2;i++)
        {
          p=p->next;
        }
       q=p->next;
       p->next = q->next;
        x = q->data;
        delete q;
    }
    return x;
}
int main()
{
    linkedlist list1;
    int a[] = {2,3,4,5,6};


    list1.create(a,5);
    list1.delete1(head,2);
    list1.display(head);
    return 0;
}
