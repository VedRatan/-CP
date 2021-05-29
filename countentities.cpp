#include<stdio.h>
int main()
{
	printf("enter the name of the file to be open for reading:");
	char c[50];
	gets(c);
	FILE *ptr;
	ptr=fopen(c,"r");
	int c1=0,words=0,lines=0;
	char ch;
	while((ch=fgetc(ptr))!=EOF)
	{
		c1++;
		if(ch=='\n')
		{
			lines++;
			words++;
		}
		if(ch==' '||ch=='.'||ch=='?'||ch=='!')
		words++;
	}
	printf("the number of characters in file %s is %d\n",c,c1);
	printf("the number of words in file %s is %d\n",c,words);
	printf("the number of lines in file %s is %d\n",c,lines);
	fclose(ptr);
	fclose(ptr);
}
