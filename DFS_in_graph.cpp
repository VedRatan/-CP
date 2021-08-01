#include <bits/stdc++.h>
using namespace std;
struct node{
int data;
node *next;
};
struct queue1{
    int front=-1;
    int rear=-1;
    int arr[16];
};
void push1(node *arr[],int a, int b)
{
    node *ptr=new node;
    ptr->data=b;
    ptr->next=NULL;
    node* head=arr[a];
    if(arr[a] == NULL)
    {
        arr[a] = ptr;
        cout<<"edge inserted successfully"<<endl;
    }
    else
    {
             while(head->next!=NULL)
            head=head->next;
            head->next=ptr;
            cout<<"edge inserted successfully"<<endl;    
    }
}
void generategraph(node *arr[])
{
    int a,b,choice;
    bool flag=true;
    while(flag)
    {
        cout<<"------------------------------"<<endl;
        cout<<"enter 1 to insert a edge in a graph"<<endl<<"enter 2 to exit"<<endl<<"enter your choice: ";
        cin>>choice;
        switch(choice)
        {
            case 1: cout<<"enter the vertices between which you want to create a edge: ";
            cin>>a>>b;
            push1(arr,a,b);
            break; 
            case 2:flag=false;
            break;
            default: cout<<"INVALID CHOICE"<<endl;
            break;
        }
    }
    cout<<"graph created successfully"<<endl;
}
void DFSRec(node *arr[],int source, bool visited[])
{
    visited[source]=true;
    cout<<source<<" ";
     node *v = arr[source];

        while (v != NULL)
        {
            if (visited[v->data] == false)
            DFSRec(arr, v->data, visited);
            v=v->next;
        }
}
void DFS(node *arr[], int v, int source)
{
    bool visited[v+1];
    for(int i=0;i<v;i++)
    visited[i]=false;
    DFSRec(arr, source , visited);
}
int main()
{
    int v,source;
    cout<<"enter the number of vertices: ";
    cin>>v;
     node *arr[v+1];
    for (int i = 0; i < v+1; i++)
    {
        arr[i] = new node;
        arr[i] = NULL;
    }
    generategraph(arr);
     cout << "enter the source vertex: ";
    cin >> source;
    DFS(arr,v,source);
}