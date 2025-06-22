#include<iostream.h>
#include<conio.h>


void main()
{
	int min = 3, b = 5;

	clrscr();

	for(int i=min;i<=100;i++)
	{
		int cnt = 0;

		if(i%min==0 && i%b==0)
		{
			cnt+=1;
		};

		if(cnt==1)
		{
			cout<<i<<endl;
		};
	};


	getch();
};