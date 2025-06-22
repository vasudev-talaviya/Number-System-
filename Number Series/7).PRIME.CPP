#include<iostream.h>
#include<conio.h>

void main()
{

	int i;

	clrscr();


	for(i=2;i<=100;i++)
	{
		int cnt = 0;

		for(int j=2;j<=i;j++)
		{
			if(i%j==0)
			{
				cnt+=1;
			};
		};

		if(cnt==1)
		{
			cout<<endl<<"This is Prime Number:-"<<i;
		};
	};



	getch();
}