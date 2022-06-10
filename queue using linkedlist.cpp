#include <iostream>

using namespace std;
class node
{
public:
    int data;
    node *next;
}*front1 = NULL,*rear=NULL;

void enqueue(int x)
{
    node *t;
    t = new node();
    if(t==NULL)
    {
        cout<<"Queue is Full!"<<endl;
    }
    else{
        t->data =x;
        t->next= NULL;
        if(front1 == NULL)
        {
            front1 = rear =t;
        }
        else
        {
            rear->next = t;
            rear = t;
        }

    }
}
int dequeue()
{
    int x=-1;
    node *t;
    if(front1==NULL)
    {
        cout<<"Queue is Empty! "<<endl;
    }
    else{
        x = front1->data;
        t = front1;
        front1 = front1->next;
        delete t;
    }
    return x;
}

void display()
{
    node *p = front1;
    //p = front1;
    while(p)
    {
        cout<<p->data<<" ";
        p=p->next;
    }
    cout<<endl;
}
int main()
{
    enqueue(10);
    enqueue(50);
    enqueue(40);
    enqueue(30);
    enqueue(20);


    display();
    return 0;
}
