#include<stdio.h>
void main(){
	int n;
	printf("ENTER A VALUE");
	scanf("%d",&n);
	switch(n)
	{
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12: printf("MONTH DAYS IS 31");
		break;
		case 4:
		case 6:
		case 9:
		case 11: printf("MONTH DAYS IS 30");
		break;
		case 2: printf("MONTH DAYS IS 28");	
	}
}
