#include<iostream.h>
#include<stdio.h>
#include<conio.h>
#include<time.h>
void main()
{
	int i,j,s,n;
       int k=0;
	clrscr();
	time_t a;
	time(&a);
	textcolor (BLINK);
	textbackground (450);
	///textbackground(100);
	cout<<ctime(&a)<<endl;
	cout<<"Enter no.";
	cin>>n;
      for(i=1;i<=n;i++)
	{
		for(s=n-1;s>=i;s--)   //to opposit for(s=1;s<=i;s++)
	      printf(" ");
		for(j=1;j<=i+k;j++)     //to opposit for(j=n;j>=i;j--)
	       cprintf("*");
		cout<<endl;
		k++;
	}
	for(i=1;i<=n;i++)
	{
		for(s=1;s<=i;s++)
		cout<<" ";
	       //	for(j=1;j<=n-i;j++)
	       //	cout<<"*";
		for(j=1;j<=n-i;j++)
		cout<<"*";
		cout<<endl;
	}
	getch();
}