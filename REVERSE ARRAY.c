#include<stdio.h>
void main()
{
	int n,i,arr[i];
	printf("ENTER A SIZE OF ARRAY:-");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=n;i>=0;i--)
	{
		printf("ELEMENT OF ARRAY:-%d\n",arr[i]);
	}
}
