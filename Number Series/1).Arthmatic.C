#include<stdio.h>
#include<conio.h>


void main()
{
	int a = -2 , d = -2,i;

	clrscr();


	for(i = 1;i<=10; i++)
	{
		printf("\n%d",a);
		a = a+d;
	};

	getch();
}