#include <iostream>

using namespace std;
class queue1
{
public:
    int size1;
    int front1;
    int rear;
    int *Q;
};

void create(queue1 *q,int size2)
{
   q->size1 = size2;
   q->front1 = q->rear = -1;
   q->Q = new int(q->size1);
}
void enqueue( queue1 *q,int x)
{
    if(q->rear == q->size1-1)
    {
        cout<<"Queue is Full!"<<endl;
    }
    else{
       q->rear++;
      q->Q[q->rear] =x;
    }
}
int dequeue (queue1 *q)
{
    int x=-1;
    if(q->front1 == q->rear)
    {
        cout<<"Queue is Empty!"<<endl;
    }
    else{
        q->front1++;
        x =q->Q[q->front1];
    }
    return x;
}
void display(queue1 q)
{
    for(int i = q.front1+1;i<=q.rear;i++)
    {
        cout<<q.Q[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    queue1 q;
    create(&q,5);

    enqueue(&q,5);
    enqueue(&q,7);
    enqueue(&q,6);
     enqueue(&q,5);
    enqueue(&q,7);
    enqueue(&q,6);
    dequeue(&q);
    dequeue(&q);
    dequeue(&q);
    dequeue(&q);
    dequeue(&q);
    dequeue(&q);

    display(q);
    return 0;
}
