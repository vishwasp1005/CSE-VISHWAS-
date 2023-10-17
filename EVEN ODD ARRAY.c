#include<stdio.h>
void main()
{
	int i,n;
	printf("ENTER ARRAY SIZE:-");
	scanf("%d",&n);
	int arr[n],countodd=0,counteven=0;
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		if(arr[i]%2==0)
		{
			counteven++;
		}
		else
		{
			countodd++;
		}
	}
	printf("even numer%d\n",counteven);
	printf("odd number%d",countodd);
	
}
