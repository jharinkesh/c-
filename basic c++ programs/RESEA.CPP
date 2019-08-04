#include<iostream.h>
#include<conio.h>
#include<time.h>
void main()
{
	int i,j,s,n;
	time_t a;
	time(&a);
       // int k=0;
      //char ch='A';
	clrscr();
       //	cout<<"Enter no.";
       //	cin>>n;
       cout<<ctime(&a)<<endl;
	for(i=3;i>=1;i--)
	{
		//for(s=n-1;s>=i;s--)
		  //	cout<<" ";
		for(j=1;j<=i;j++)
		cout<<"*";
		//ch++;
		cout<<endl;
	      //k++;
	}
	getch();
}