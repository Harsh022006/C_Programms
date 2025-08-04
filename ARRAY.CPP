#include<stdio.h>
#include<conio.h>

void main()
{
	int arr[10],i;
	clrscr();
	printf("\nEnter Array Elements\n");
	for(i=0;i<10;i++)
	{
		printf("\nEnter %d Elements : ",i);
		scanf("%d",arr[i]);
	 }
	 getch();
}
