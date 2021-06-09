#include <bits/stdc++.h>
using namespace std;
struct item
{
    int data;
    item *next;
    item *prev;
}*p;
struct dequeue1
{
    item *front;
    item *rear;
    int size;
    dequeue1()
    {
        front=NULL;
        rear=NULL;
        size=0;
    }
};
bool Empty(dequeue1 *dq)
{
    if(dq->size==0)
    return 1;
    else
    return 0;
}
void Addfront(dequeue1 *dq,int value)
{
    p=new struct item;
    p->data=value;
    p->next=NULL;
    p->prev=NULL;
    if(dq->front==NULL)
    {
        dq->front=p;
        dq->rear=p;
    }
    else
    {
        p->next=dq->front;
        dq->front->prev=p;
    dq->front=p;
    }
    dq->size+=1;
    cout<<"element inserted successfully"<<endl;
}
void Addrear(dequeue1 *dq,int value)
{
    p=new struct item;
    p->data=value;
    p->next=NULL;
    p->prev=NULL;
    if(dq->front==NULL)
    {
        dq->front=p;
        dq->rear=p;
    }
    else
    {
        dq->rear->next=p;
        p->prev=dq->rear;
        dq->rear=p;
    }
    dq->size+=1;
    cout<<"element inserted successfully"<<endl;
}
int Deletefront(dequeue1 *dq)
{
    struct item *temp;
    int item;
    temp=dq->front;
    item=temp->data;
    dq->front=dq->front->next;
    free(temp);
    dq->size-=1;
    cout<<"element deleted successfully"<<endl;
   return item;
}
int Deleterear(dequeue1 *dq)
{
    int data;
    struct item *temp,*ptr;
    temp=dq->rear;
    if(dq->front==dq->rear)
    {
       data=dq->front->data;
       dq->front=NULL;
       dq->rear=NULL; 
    }
    else
    {
        data=temp->data;
        ptr=dq->rear;
        dq->rear=temp->prev;
        temp->prev->next=NULL;
        free(ptr);
    }
    dq->size-=1;
    cout<<"emelent deleted successfully"<<endl;
    return data;
}
void display(dequeue1 *dq)
{
    if(Empty(dq))
    cout<<"the queue is empty"<<endl;
    else
    {
        struct item *temp;
        temp=dq->front;
        while(temp!=NULL)
        {
            cout<<temp->data<<"<=>";
            temp=temp->next;
        }
        cout<<"NULL"<<endl;
    }
}

int main()
{
    
    struct dequeue1 *dq=new dequeue1();
    int val;
    int choice;
    bool flag=true;
    while(flag)
    {
        cout<<"-------------------------------------------"<<endl;
        cout<<"enter 1 to insert a element from front in a queue"<<endl<<"enter 2 to insert a element from rear in a queue"<<endl;
        cout<<"enter 3 to delete a element from front in a queue"<<endl<<"enter 4 to delete a element from rear in a queue"<<endl<<"enter 5 to get size of the queue"<<endl;
        cout<<"enter 6 to display the queue"<<endl<<"enter 7 to exit"<<endl;
        cout<<"enter your choice: ";
        cin>>choice;
        switch(choice)
        {
            case 1:cout<<"enter the value to be inserted: ";
            cin>>val; 
            Addfront(dq,val);
            break;
            case 2:cout<<"enter the value to be inserted: ";
            cin>>val; 
            Addrear(dq,val);
            break;
            case 3:if(Empty(dq)){cout<<"the queue is already empty"<<endl;}
            else{ cout<<"the deleted element is: "<<Deletefront(dq)<<endl;}
            break;
            case 4: if(Empty(dq)){cout<<"the queue is already empty"<<endl;}
            else{ cout<<"the deleted element is: "<<Deleterear(dq)<<endl;}
            break;
            case 5:cout<<"The size of the queue is: "<<dq->size<<endl;
            break;
            case 6: display(dq); 
            break;
            case 7: flag=false;
            break;
            default: cout<<"invalid choice"<<endl;
            break;
        }
    }
    return 0;
}