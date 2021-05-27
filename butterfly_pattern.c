#include<stdio.h>
int main()
{
	printf("enter the range: ");
	int n;
	scanf("%d",&n);
	int p=2*n-1;
	for(int i=1;i<=p;i++)
	{
		if(i<=p/2)
		{
		for(int j=0;j<p;j++)
		{
			if(j>=i&&j<(p-i))
			printf(" ");
			else
			printf("*");
		}
		}
		else
		{
		for(int j=0;j<p;j++)
		{
			if(j>p-i&&j<i-1)
			printf(" ");
			else
			printf("*");
		}
		}
		printf("\n");
		
	}
}
