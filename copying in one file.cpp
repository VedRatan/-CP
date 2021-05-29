#include<stdio.h>
int main()
{
	printf("enter the name of the first file to be open for reading:");
	char c[20];
	gets(c);
	FILE *ptr,*p,*a;
	ptr=fopen(c,"r");
	printf("enter the name of the second file to be open for reading:");
	char c1[20];
	gets(c1);
	p=fopen(c1,"r");
	a=fopen("v","w");
	char ch;
	while((ch=fgetc(ptr))!=EOF)
	{
		fputc(ch,a);
	}
	while((ch=fgetc(p))!=EOF)
	{
		fputc(ch,a);
	}
	fclose(ptr);
	fclose(p);
	fclose(a);
}
