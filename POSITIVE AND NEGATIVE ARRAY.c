#include<stdio.h>
void main()
{
	int i,n;
	printf("ENTER ARRAY SIZE:-");
	scanf("%d",&n);
	int arr[n],countp=0,countn=0;
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		if(arr[i]>0)
		{
			countp++;
		}
		else
		{
			countn++;
		}
	}
	printf("POSITIVE NUMBER%d\n",countp);
	printf("NEGATIVE NUMBER%d",countn);
	
}
