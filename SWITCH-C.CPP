#include<stdio.h>
#include<conio.h>
#include<dos.h>
#include<graphics.h>

void main()
{
	int a,b,ans,choice;
	clrscr();
	delay(1000);
	textcolor(5);
	printf("\n------------------------------------\n");
	cprintf("Enter A : ");
	scanf("%d",&a);
	textcolor(BLUE);
	cprintf("Enter B : ");
	scanf("%d",&b);
	delay(500);
	printf("\n------------------------------------\n");
	printf("1. Addition");
	printf("\n");
	printf("2. Subtraction");
	printf("\n");
	printf("3. Multiplication");
	printf("\n");
	printf("4. divison");
	printf("\n");
	delay(1000);
	printf("\n------------------------------------\n");
	textcolor(YELLOW);
	cprintf("\n\nEnter Your Choice : ");
	scanf("%d",&choice);
	delay(1000);

	printf("\n------------------------------------\n");
	delay(1000);
	switch(choice)
	{
		case 1 :
			ans=a+b;
			textcolor(GREEN);
			cprintf("Addition : %d ",ans);
			printf("\n");
			break;
		case 2 :
			ans=a-b;
			textcolor(GREEN);
			cprintf("Subtraction : %d",ans);
			printf("\n");
			break;
		case 3 :
			ans=a*b;
			textcolor(GREEN);
			cprintf("Multiplication : %d",ans);
			printf("\n");
			break;
		case 4 :
			ans=a/b;
			textcolor(GREEN);
			cprintf("divison : %d",ans);
			printf("\n");
			break;
		default :
			textcolor(RED);
			cprintf("Invalid choice");
			printf("\n");
			break;
	}
	printf("\n------------------------------------\n");
	getch();
}


