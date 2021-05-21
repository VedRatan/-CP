#include<stdio.h>
#include<math.h>
int main()
{
	int k=0;
	int a=0,b=0,c=0,d=0,i=0;
	printf("enter a number: \n");
	scanf("%d",&a);
	while(a>0)
	{
		if(i==0)
		b=a%10;
		else if(a<10)
		c=a;
		else
		d=d*10+(a%10);
		a=a/10;
		i++;
	}
	for(int i=d;i>0;i/=10)
	k=k*10+i%10;
	k=k*10+c;
	float x=b*pow(10,(i-1))+k;
	printf("the number is: %f",x);
}

