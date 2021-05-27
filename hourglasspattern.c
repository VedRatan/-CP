#include<stdio.h>
int main()
{
	printf("enter the range: ");
	int n;
	scanf("%d",&n);
	int p=n;
	for(int i=0;i<n;i++)
	{
		if(i<=n/2)
		{
			for(int j=0;j<p;j++)
			{
				if(j<i)
				printf(" ");
				else
				printf("*");
			}
			p-=1;
		}
		else
		{
			p+=1;
			for(int j=0;j<p+1;j++)
			{
				if(j<(n-i-1))
				printf(" ");
				else
				printf("*");
			}
			
		}
		printf("\n");
		
	}
}
