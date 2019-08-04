#include<iostream.h>
#include<conio.h>
#include<stdio.h>
void main()
{
	char pass[10];
	char ch;
	int i,j;
	clrscr();
	cout<<"Enter the password";
	for(i=0;i<=10;i++)
	{
		pass[i]=getch();
		if(pass[i]==13)
		break;
		if(pass[i]==8)
		{
		  j--;
		  cout<<"\b \b";
		}
		else
		{
			 j++;
			cout<<"*";
		}
	}
	getch();

}