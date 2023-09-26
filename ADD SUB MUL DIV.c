#include<stdio.h>
void main(){
	float a,b;
	int choice;
	printf("1=add 2=sub 3=mul 4=div");
	scanf("%f %f",&a,&b);
	scanf("%d",&choice);
	switch(choice){
		case 1:
			printf("%f",a+b);
			break;
			case 2:
			printf("%f",a-b);
			break;
			case 3:
			printf("%f",a*b);
			break;
			case 4:
			printf("%f",a/b );
			break;
	}
}



