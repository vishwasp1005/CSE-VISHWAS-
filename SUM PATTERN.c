#include<stdio.h>
void main(){
	int i,j,sum=0,n;
	printf("ENTER N VALUE");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	for(j=1;j<=i;j++)
	{
	sum=sum+j;
}
	}
	  	printf(" %d",sum);
}
