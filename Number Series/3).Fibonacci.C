#include<stdio.h>
#include<conio.h>

void main()
{
	int a=1,b=2,next,i=1;

	clrscr();

	printf("%d",a);
	printf("\n%d",b);

	for(i=1;i<=10;i++)
	{
		next = a+b;
		printf("\n%d",next);
		a=b;
		b=next;

	}


	getch();
}