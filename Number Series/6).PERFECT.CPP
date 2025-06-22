#include<iostream.h>
#include<conio.h>

void main()
{

	int i,j;

	clrscr();
	// 6 , 28 , 496

	for(i=2;i<=1000;i++)
	{
		int cnt=0;
		int sum = 0;

		for(j=1;j<=i/2;j++)
		{
			if(i%j==0)
			{
				cnt+=1;
				sum+=j;
			};
		};

		if(i==sum)
		{
			cout<<"This Number is perfect:-"<<i<<endl;
		};

	};

	getch();
};