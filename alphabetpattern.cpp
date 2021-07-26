#include<stdio.h>
int main()
{
	printf("enter the number of rows: ");
	int n;
	scanf("%d",&n);
	int p=n;
	int counter=65;
	for(int i=0;i<p;i++)
	{
		counter+=i;
		for(int j=0;j<=i;j++)
		{
			if(j==0)
			printf("%c ",counter);
			else
			{
				counter=counter+n-1;
				printf("%c ",counter);
				--n;;
			}
		}
		counter=65;
			n=p;
		printf("\n");
	}
}
