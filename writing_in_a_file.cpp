#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *ptr;
	char c[50]={"HELLO WORLD"};
	ptr=fopen("mydoc.txt","w");
	fprintf(ptr,"%s",c);
	fclose(ptr);
}
