#include<stdio.h>
#include<stdlib.h>
struct stack
{
	int top;
	int capacity;
	int *a;
};
struct stack *newstack=(struct stack*)malloc(sizeof(struct stack));
void push()
{
	int data;
	if(newstack->top == newstack->capacity-1)
	printf("overflow");
	else
	{
		printf("enter the data: ");
		scanf("%d",&data);
		newstack->a[++newstack->top]=data;
	}
}
void pop()
{
	if(newstack->top==-1)
	printf("the stack is already empty");
	else
	{
		newstack->a[newstack->top--];	
	}
}
void display()
{
	if(newstack->top==-1)
	printf("nothing to print");
	else
	{
		for(int i=newstack->top;i>=0;i--)
		printf("%d ",newstack->a[i]);
	}
}
int main()
{
newstack->top=-1;
newstack->a=(int*)malloc(newstack->capacity*sizeof(int));
int capacity=100;
newstack->capacity=capacity;
	bool flag=true;
	while(flag)
	{
		printf("----------------------------------------\n");
		printf("enter 1 to push the element in stack \n enter 2 to pop the element from stack \n enter 3 to display the entire stack \n enter 4 to exit \n");	
		printf("enter your choice: ");
		int n;
		scanf("%d",&n);
		switch(n)
		{
			case 1: push();
			break;
			case 2: pop();
			break;
			case 3: display();
			printf("\n");
			break;
			case 4: flag=false;
			break;
			default: printf("invalid choice");
		}
	}
}
