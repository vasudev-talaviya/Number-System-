#include<iostream.h>
#include<conio.h>


void main()
{

	clrscr();

	for(int i = 1;i<=1000;i++)
	{
		int store=i,multi=0;

		while(store>0)
		{
			int temp = store%10;
			multi = (multi*10)+temp;
			store = store/10;
		};

		if(i==multi)
		{
			cout<<"This is 	perfect number:-"<<i<<endl;
		};
	};


	getch();

};