#include<stdio.h>
#include<conio.h>

void main()
{
	int n,sum;
	clrscr();
	printf("\nEnter no : ");
	scanf("%d",&n);
	printf("\nEnter sum : ");
	scanf("\n%d",&sum);
	do
	{
		sum=sum+n;
		n--;
	}while(n>0);
	printf("\nsum : %d",sum);

	getch();
}