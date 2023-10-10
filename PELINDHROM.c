#include<stdio.h>
void main()
{
	int i,n,a=0,num;
	printf("ENTER A VALUE:-");
	scanf("%d",&n);
	num=n;
	while(n!=0)
	{
		a=(a*10)+(n%10);
		n=n/10;
	}
	if(a==num)
	{
		printf("NUM IS PELIMDROM");
	}
	else 
	printf("NUM IS NOT PELIMDROM");
	}
	

