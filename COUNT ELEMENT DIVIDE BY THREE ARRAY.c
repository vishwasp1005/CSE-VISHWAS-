#include<stdio.h>
void main()
{
	int i,n;
	printf(" ENTER AN ARRAY SIZE :-");
	scanf("%d",&n);
	int a[n],countneg=0;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]%3==0){
			countneg++;
   }
	}
	printf("NEGATIVE NUMBER IS :-%d",countneg);
}
