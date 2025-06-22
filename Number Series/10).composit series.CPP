#include<iostream.h>
#include<conio.h>

void main()
{
	clrscr();

	for(int i=1;i<=100;i++)
	{
		int cnt = 0;

		for(int j=1;j<=i;j++)
		{
			if(i%j==0)
			{
				cnt+=1;
			};
		};

		if(cnt>=3)
		{
			cout<<i<<" ";
		};

	};


	getch();

};