#include<stdio.h>
#include<conio.h>

void main()
{
	int num = 10;
	int *ptr = &num;

	printf("\nOriginal value of num : %d",num);

	*ptr = 20;

	printf("\nModified value of num : %d",num);

	getch();
}