#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
void main()
{
	int n,f=1,p,r,d,b,c,a,l,g;
	clrscr();
	printf("Input your choice own choice");
	scanf("%d",&n);
	switch(n)
	{
		case 1:
		{
			printf("INput any no.");
			scanf("%d",&p);
			while(p>=1)
			{
				f=p*f;
				p--;
			}
			printf("%d",f);
			getch();
		}
		case 2:
		{
			printf("INput any no.");
			scanf("%d",&d);
			while(d!=0)
			{
				r=d%2;
				c=c+b*r;
				d=d/2;
				b=b*10;
			}
			printf("%d",c);
			getch();
		}
		case 3:
		{
			exit(0);
		}
		default :
		{
			printf("Your choice is invalid");
		}

	}

	 getch();
}