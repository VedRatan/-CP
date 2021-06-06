#include <bits/stdc++.h>
using namespace std;
struct queue1
{
    int front;
    int rear;
    int capacity;
    int *items;
    queue1(int capacity)
    {
        this->capacity = capacity;
       items = new int[capacity];
        front = -1;
        rear = -1;
    }
};
bool full_queue(queue1 *q)
{

    if((q->front==0&&q->rear==q->capacity-1)||q->front==q->rear+1)
    return 1;
    else
    return 0;
}
bool empty_queue(queue1 *q)
{
    if (q->front==-1)
    return 1;
    else
    return 0;
}
void insert_queue(queue1 *q, int data)
{
    if(full_queue(q))
    {
        cout<<"OVERFLOW"<<endl;
        return;
    }
    if(q->front==-1)
        q->front=q->rear=0;
    else
    {
        if(q->rear==q->capacity-1)
        q->rear=0;
        else
        q->rear=q->rear+1;
    }
    q->items[q->rear]=data;
    cout<<"element inserted successfully"<<endl;
}
int delete_queue(queue1 *q)
{
    int item=q->items[q->front];
    if(q->front==q->rear)
    q->front=q->rear=-1;
    else
    {
        if(q->front==q->capacity-1)
        q->front=0;
        else
        q->front=q->front+1;
    }
    cout<<"Element deleted successfully"<<endl;
    return item;
}
void display_queue(queue1 *q)
{
    if(empty_queue(q))
        cout<<"the queue is empty"<<endl;
    else
    {
        int start=q->front, end=q->rear;
        if(start<=end)
        for(int i=start;i<=end;i++)
        {
            cout<<q->items[i]<<" ";
        }
        else
        {
            for(int i=start;i<q->capacity;i++)
            cout<<q->items[i]<<" ";
            start=0;
            for(int i=start;i<=end;i++)
            cout<<q->items[i]<<" ";
        } 
    }
}
int main()
{
    int size,val;
    cout << "enter the size of the queue: ";
    cin >> size;
    cout<<endl;
    cout<<"******************************************"<<endl;
    struct queue1 *q = new queue1(size);
    bool flag=true;
    while(flag)
    {
        int choice;
        cout<<"-------------------------------------------"<<endl;
        cout<<"enter 1 to insert a element in a queue"<<endl<<"enter 2 to delete a element in a queue"<<endl<<"enter 3 to display the entire queue"<<endl<<"enter 4 to exit"<<endl<<"enter your choice: ";
        cin>>choice;
        switch(choice)
        {
            case 1:cout<<"enter the value to be inserted: ";
            cin>>val; 
            insert_queue(q,val);
            break;
            case 2:if(empty_queue(q)){cout<<"the queue is already empty"<<endl;}
            else{ cout<<"the deleted element is: "<<delete_queue(q)<<endl;}
            break;
            case 3: display_queue(q);
            cout<<endl;
            break;
            case 4: flag=false;
            break;
            default: cout<<"invalid choice"<<endl;
            break;
        }
    }
    return 0;
}