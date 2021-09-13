//WAP to accept a no from the user and print no os digits in that no
//e.. 125 O/P 3
//I/P 7568 O/P 4

//34
//separate each digit
#include<stdio.h>
#include<conio.h>

int main()
{
	int n, count=0;
	printf("Enter a no. ");
	scanf("%d",&n);
	
	while(n!=0)
	{
		n=n/10;
		count++;
	}
	printf("No of digits in %d is %d",n,count);
	
	getch();
	return 0;
}