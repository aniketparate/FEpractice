/*
Write a program to display following asking the user for no. of “ * ” in the largest line.
*
**
***
**
*

#include<stdio.h>

int main()
{
	int i,n,count;
	
	printf(" Enter value of N : ");
	scanf("%d",&n);
	
	printf("\n");
	for(count=1;count<=n;count++)
	{
		printf(" ");
		for(i=1;i<=count;i++)
		printf("*");
		printf("\n");
	}
	for(count=n-1;count>=1;count--)
	{
		printf(" ");
		for(i=count;i>=1;i--)
		printf("*");
		printf("\n");
	}
	return 0;
}
*/

/*
Write a program to reverse the digits of a user-entered number

#include<stdio.h>

int main()
{
	int i=0,n,count;

	printf(" Enter the number : ");
	scanf("%d",&n);
	printf("\n");

	while(n!=0)
	{
		i=n%10;
		printf("%d",i);
		n=n/10;
	}
	return 0;
}
*/

/*
 To calculate and display the total of 10 integer numbers

#include<stdio.h>

int main()
{
	int arr[10],i,sum=0,j;
	
	printf(" Enter the array elements :-\n\n");	
	for(i=0,j=1;i<10,j<=10;i++,j++)
	{
		printf(" Enter %d number : ",j);
		scanf("%d",&arr[i]);
	}
	
	for(i=0;i<10;i++)
	{
		sum=sum+arr[i];
	}
	printf("\n Sum of all the 10 numbers is : %d",sum);
	return 0;
}
*/

/*
A program to calculate the transpose of a matrix.

#include<stdio.h>

int main()
{
	int i,j,row,col;
	
	printf(" Enter number of rows : ");
	scanf("%d",&row);
	printf(" Enter number of coloums : ");
	scanf("%d",&col);
	printf("\n");
	
	int arr[row][col];
	
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf(" Enter a number : ");
			scanf("%d",&arr[i][j]);
		}
	}

	printf("\n\n Original Martix is :-");
	for(i=0;i<row;i++)
	{
		printf("\n");
		for(j=0;j<col;j++)
		{
			printf(" %d\t",arr[i][j]);
		}
	}
	
	printf("\n\n Transpose Martix is :-");
	for(i=0;i<col;i++)
	{
		printf("\n");
		for(j=0;j<row;j++)
		{
			printf(" %d\t",arr[j][i]);
		}
	}
	return 0;
}
*/

/*
Write a C program to find the number of vowels present in the string.

#include<stdio.h>

int main()
{
	int i,count=0,j;
	char str[100];
	
	printf(" Enter a string : ");
	scanf("%s",&str[i]);
	
	for(i=0;i<100;i++)
	{
		if(str[i]=='a'||str[i]=='A'||str[i]=='e'||str[i]=='E'||str[i]=='i'||str[i]=='I'||str[i]=='o'||str[i]=='O'||str[i]=='u'||str[i]=='U')
		count=++;
	}
	printf("\n The total number of vowels are : %d",count);
	return 0;
}
*/
#include<stdio.h>

int main()
{
	int i,len=0,count=0;
	char str[100];
 	
	printf(" Enter a string : ");
	gets(str);
	
	while(str[len]!=0)
	{
		len++;
	}
	for(i=0;i<=len-1;i++)
	{
		if(str[i]=='a'||str[i]=='A'||str[i]=='e'||str[i]=='E'||str[i]=='i'||str[i]=='I'||str[i]=='o'||str[i]=='O'||str[i]=='u'||str[i]=='U')
		count++;
	}
	printf("\n The total number of vowels are : %d",count);
	return 0;
}