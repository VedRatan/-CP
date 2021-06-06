#include <bits/stdc++.h>
using namespace std;
struct item
{
    int data;
    item *next;
}*p;
struct queue1
{
    item *front;
    item *rear;
};
bool empty_queue(queue1 *q)
{
    if(q->front == NULL)
    return 1;
    else
    return 0;
}
int delete_queue(queue1 *q)
{
    int item;
    p = q->front;
   if (p->next != NULL) {
      p = p->next;
      item= q->front->data;
      free(q->front);
      q->front = p;
   } else {
      item= q->front->data;
      free(q->front);
      q->front = NULL;
      q->rear = NULL;
   }
   return item;
}
void insert_queue(queue1 *q, int item)
{
    if(q->rear==NULL)
    {
       q->rear=new struct item;
    q->rear->data=item;
    q->rear->next=NULL;
    q->front=q->rear;
    }
   else
   {
        p=new struct item;
        q->rear->next=p;
    p->data=item;
    p->next=NULL;
    q->rear=p;
   }
    cout<<"element inserted successfully"<<endl;
}
void display_queue(queue1 *q)
{
    if(q->rear==NULL&&q->front==NULL)
    cout<<"The queue is empty"<<endl;
    else
    {
    p=q->front;
        while(p!=NULL)
        {
            cout<<p->data<<" ";
            p=p->next;
        }
    }
}
int main()
{
    struct queue1 *q=new struct queue1;
    q->front=NULL;
    q->rear=NULL;
    int val;
    cout<<"******************************************"<<endl;
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
