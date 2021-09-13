#include<stdio.h>

int main()
{
	int a,b,c;
	
	printf("Enter 1st number : ");
	scanf("%d",&a);
	
	printf("Enter 2st number : ");
	scanf("%d",&b);
	
	printf("Enter 3st number : ");
	scanf("%d",&c);
	
	if (a>b) {
		printf("%d number is GREATER",a);
	}
	else if (b>c) {
		printf("%d number is GREATER",b);
	}
	else {
		printf("%d number is GREATER",c);
	}
	
	return 0;
}