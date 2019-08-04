#include<iostream.h>
#include<stdio.h>
#include<conio.h>
#include<string.h>
///not working this///
using namespace_std;
int main(void)
{
	beginning:
	system("CLS");
	system("TITLE ENTER Password");
	string password;
	string playgames;
	cout<<"LOGON";
	cin>>password;
	if(password=="passwordhere")
	{
		system("TITLE Welcome");
		system("CLS");
		cout<<"Welcome, master HAXIFI"<<endl;
		system("PAUSE");
		goto palygamesl
	}
	else
		{
			cout<<"Incorrect User name"<<endl;
			cout<<"--CONNECTION TERMINATED--"<<endl;
			system("PAUSE");
			goto exit;
		}
	exit:
	return 0;
	playgames:
	system("CLS");
	system("TITLE Hello, Mr. HAXIFIZ");
	cout<<"Would you like to play a game?"<<endl;
	cout<<"Answer:";
	cin>>palygames:
	if(playgames=="Yes"||playgames=="yes")
	{
		goto whatgame;

	}
	else
		{
			cout<<"Ok, I will ask later."<<endl;
			system("PAUSE");
			return 0;
		}

}
