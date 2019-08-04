#include<iostream.h>
#include<stdio.h>
#include<conio.h>
#include<time.h>
void main()
{
	long a,b,c,d,e=0,n;
	int i;
	time_t t;
	time(&t);
	clrscr();
	cout<<ctime(&t)<<endl;
	cout<<"\nEnter 4 digit no.";
	cin>>n;
	while(n>0)
      // for(i=1;i<=n;i++)
	{
		a=n%10;
		n=n/10;
		b=n%10;
		n=n/10;
		c=n%10;
		n=n/10;
		d=n%10;
		n=n/10;
		 e=(a*1000)+(b*100)+(c*10)+(d*1);


	}
	 cout<<e=;
	getch();
}