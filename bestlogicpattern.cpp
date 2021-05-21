#include<stdio.h>
#include<stdlib.h>
int MAX(int a,int b)
{
	if(a>b)
	return a;
	else if(b>a)
	return b;
	else
	return a; 
}
int main()
{
	printf("enter the number: ");
	int n;
	scanf("%d",&n);
	int l=2*n-1;
	for(int i=-n+1;i<n;i++)
	{
		for(int j=-n+1;j<n;j++)
		printf("%d ",MAX(abs(i),abs(j))+1);
		printf("\n");
	}
}
