#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *link;
};
struct node *tail=NULL;
int size=0;
void addfirst()
{
	printf("enter the data: ");
	int d;
	scanf("%d",&d);
	struct node *temp=(struct node*)malloc(sizeof(struct node));
	temp->data=d;
	if(tail==NULL)
	{
		temp->link=temp;
		tail=temp;
	}
	else
	{
		temp->link=tail->link;
		tail->link=temp;
	}
	size++;
}
void addlast()
{
	printf("enter the data: ");
	int d;
	scanf("%d",&d);
	struct node *temp=(struct node*)malloc(sizeof(struct node));
	temp->data=d;
	if(tail==NULL)
	{
		temp->link=temp;
		tail=temp;
	}
	else
	{
		temp->link=tail->link;
		tail->link=temp;
		tail=temp;
	}
	size++;
}
void addpos()
{
	printf("enter the position: ");
	int pos,n;
	scanf("%d",&pos);
	printf("enter the data:  ");
	scanf("%d",&n);
	struct node *temp=(struct node*)malloc(sizeof(struct node));
	temp->data=n;
	struct node *head=tail->link;
	if(pos==1)
	{
		addfirst();
		size++;
	}
	else if(pos==size+1)
	{
		addlast();
		size++;
	}
	else if(pos<1||pos>size+1)
	printf("invalid input");
	else if(tail==NULL)
	printf("the list is empty so can't enter a node at desired position");
	else
	{
		for(int i=1;i<pos-1;i++)
		head=head->link;
	}
	temp->link=head->link;
	head->link=temp;
	size++;
}
void deletefirst()
{
	struct node *temp;
	if(tail==NULL)
	printf("the list is already empty\n");
	else if(tail->link==tail)
	{
		tail = NULL;
		free(tail);
		size--;
	}
	else
	{
		temp=tail->link;
		tail->link=temp->link;
		free(temp);
		size--;
	}
}
void deletelast()
{
	if(tail==NULL)
	printf("the list is already empty");
	else if(tail->link==tail)
	{
		tail=NULL;
		free(tail);
		size--;
	}
	else
	{
		struct node *temp,*prev;
		temp=tail->link;
	while(temp->link!=tail)
	{
		temp=temp->link;
	}
		temp->link=tail->link;
		free(tail);
		tail=temp;
		size--;
	}
}
void deletepos()
{
	printf("enter the position: ");
	int pos;
	scanf("%d",&pos);
	struct node *head,*ptr;
	if(pos==1)
	{
		deletefirst();
		size--;
	}
	else if(pos==size)
	{
		deletelast();
		size--;
	}
	else if(pos<1||pos>size)
	printf("invalid input");
	else
	{
		head=tail->link;
		for(int i=1;i<pos-1;i++)
		head=head->link;
		ptr=head->link;
		head->link=ptr->link;
		free(ptr);
		size--;
	}
}
void reverse()
{	
	if(tail==NULL)
	{
			printf("the list is empty");
			return;
	}
	struct node *head,*prev,*next;
	head=tail->link;
    next   = head->link;
    //head = head->link;

    // Iterate till you reach the initial node in circular list
    while (head != tail)
    {
    	prev=head;
    	head=next;
    	next=head->link;
    	head->link=prev;
    }

    next->link = tail;
  	tail=next;      //
}
void showlist()
{
	if(tail==NULL)
	printf("the list is empty");
	else
	{
		struct node *head=tail->link;
		do
	{
		printf("%d ",head->data);
		head=head->link;
	}while(head!=tail->link);
	}
}
int main()
{
	bool flag=true;
	while(flag)
	{
		printf("enter 1 to add a node at beginning of a circular linked list\n");
		printf("enter 2 to add a node at the end of a circular linked list\n");
		printf("enter 3 to add a node at a particular position of a circular linked list\n");
		printf("enter 4 to delete a node at beginning of a circular linked list\n");
		printf("enter 5 to delete a node at ending of a circular linked list\n");
		printf("enter 6 to delete a node ata particular position\n");
		printf("enter 7 to reverse the list\n");
		printf("enter 8 to view the list\n");
		printf("enter 9 to exit\n");
		printf("enter your choice: ");
		int n;
		scanf("%d",&n);
		switch(n)
		{
			case 1: addfirst();
			break;
			case 2: addlast();
			break;
			case 3: addpos();
			break;
			case 4: deletefirst();
			break;
			case 5: deletelast();
			break;
			case 6: deletepos();
			break;
			case 7: reverse();
			break;
			case 8: showlist();
			printf("\n");
			break;
			case 9: flag=false;
			break;
			default :printf("invalid choice\n");
		}
		printf("\n");
	}
	return 0;
}
