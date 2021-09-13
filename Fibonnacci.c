#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,sum,count,n;
	printf("Enter value of n : ");
	scanf("%d",&n);
	a=0;
	b=1;
		for(count=1;count<=n;count++)
		{	
			printf("%d\n",sum);
			sum=a+b;
			a=b;
			b=sum;
		}
	getch();
	return 0;
}
				