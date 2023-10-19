#include<stdio.h>
#include<string.h>
void main()
{
	char a[100];
	printf(" ENTER A STRING:-");
	gets(a);
	int i=0,count=0;
	for(i=0;a[i]!='\0';i++)
	{
	count++;
}
	printf(" STRING IS:-%s\n",a);
	printf("STRING LENTH IS:-%d",count);
}
