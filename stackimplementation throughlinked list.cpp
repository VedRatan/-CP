#include<stdio.h>
#include<stdlib.h>
struct node   
{  
int data;  
struct node *link;  
};  
struct node *head=NULL;
void push ()  
{  
    int data;  
    struct node *temp =(struct node*)malloc(sizeof(struct node));   
        printf("Enter the data: ");  
        scanf("%d",&data);  
        if(head==NULL)  
        {         
            temp->data = data;  
            temp -> link = NULL;  
            head=temp;  
        }   
        else   
        {  
            temp->data = data;  
            temp->link = head;  
            head=temp;  
               
        } 
}
void pop()  
{  
    int item;  
    struct node *temp;  
    if (head == NULL)  
    {  
        printf("Stack is already empty");  
    }  
    else  
    {  
        item = head->data;  
        temp = head;  
        head = head->link;  
        free(temp);  
        printf("data popped");  
          
    }  
}  
void show()  
{    
    struct node *temp;  
    temp=head;  
    if(temp == NULL)  
    {  
        printf("Stack is empty\n");  
    }  
    else  
    {   
      	 while(temp!=NULL)  
        {  
            printf("%d\n",temp->data);  
            temp = temp->link;  
        }  
    }  
}  
int main ()  
{          
	bool flag=true;
    while(flag != false)  
    {  
    	int n;
		printf("\n----------------------------------------------");
        printf("\nEneter 1 to push\nEnter 2 to pop\nEnter 3 to show the stack\nEnter 4 to Exit");  
        printf("\n Enter your choice \n");        
        scanf("%d",&n);  
        switch(n)  
        {  
            case 1:  
            {   
                push();  
                break;  
            }  
            case 2:  
            {  
                pop();  
                break;  
            }  
            case 3:  
            {  
                show();  
                break;  
            }  
            case 4:   
            {  
                printf("Exiting");
				flag=false;  
                break;   
            }  
            default:  
            {  
                printf("Invalid choice");  
            }   
    }
}  
}  
