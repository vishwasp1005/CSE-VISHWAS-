#include<stdio.h>
void main()
{
	int a=100;
	printf("ENTER A VALUE");
	while(a<=200)
	{
		if(a%7==0 && a%5!=0)
		printf("%d",a);
	}
	a++;
}