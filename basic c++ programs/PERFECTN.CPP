#include<iostream.h>
#include<conio.h>
//WAP for check perfect or not.
void main()
{
	int n,r=1,sum=0;
	clrscr();
	cout<<"enter no:";
	cin>>n;
	while(n>r)
	{
		if(n%r==0)
		sum=sum+r;
		r++;
	}
		if(sum==n)
			cout<<"Yes";
		else
			cout<<"No";
	getch();
}