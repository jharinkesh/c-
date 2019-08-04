#include<iostream.h>
#include<conio.h>
#include<stdio.h>
void main()
{
	char password[10];
	char ch;
	int i;
	clrscr();
	cout<<"Enter the password";
	for(i=0;i<=10;i++)
	{
		ch=getch();
		if(ch==13)
		break;
		cout<<"*";
		if(ch==8)
		printf("\b");

		password[i]=ch;

	}

	password[i]='\0';
	cout<<password;
	getch();



}