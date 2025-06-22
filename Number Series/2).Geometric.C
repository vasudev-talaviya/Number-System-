#include<stdio.h>
#include<conio.h>

void main()
{

	int a=9,r=2,i,sum=0;

	clrscr();

	for(i=1;i<=5;i++)
	{
		printf("\n%d",a);
		sum+=a;
		a*=r;
	};

	printf("\nSum:-%d",sum);


	getch();
}