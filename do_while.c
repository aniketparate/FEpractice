//Accept positive no from user Validate user's input for correct positive no.
//Display a msg that no of attempts over
//Give user max 3 attempts to enter a positive no

#include<stdio.h>
#include<conio.h>
int main()
{
	int a,count=0;
	do
	{
		printf("\n\nEnter a positive number ");
		scanf("%d",&a);
		count++;
		if(a<0)
			printf("Enter again - Enter only positive no");
	}while(a<0);
	if(count==3)
		printf("\n\nAll 3 attemps are over");
	getch();
	return 0;
}