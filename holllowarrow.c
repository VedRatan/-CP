#include<stdio.h>
int main()
{
	printf("enter the number of rows: ");
	int n;
	scanf("%d",&n);
	int p=2*n-1;
	for(int i=0;i<n;i++)
	{
		for(int j=1;j<=p;j++)
		{
			if(j>n-i&&j<n+i)
			printf(" ");
			else
			printf("*");
		}
		printf("\n");
	}
}
