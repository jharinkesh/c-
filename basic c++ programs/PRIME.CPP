#include<iostream.h>
#include<conio.h>
void main()
{
	int n=1,s,num;
	clrscr();
      // cout<<"enter no.";
     //  cin>>num;

	while(n<=100)     //change here while(n<=num)
	{
	s=2;
	while(s<n)
	{
		if(n%s==0)
		break;
		else
		s++;
	}
	if(s==n)
		cout<<n;
		cout<<" ";
		n++;
	}
	getch();
}