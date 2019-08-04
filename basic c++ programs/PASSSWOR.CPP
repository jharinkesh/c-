#include<iostream.h>
#include<conio.h>
		       /// not working this///


class Password
{
protected:
	string password;
	string input;
public:
	Password(string pass)//{this->password=pass;}
	void input()
	{
		while(true)
		{
		char temp;
		temp=getch();
		if(GetAsyncKeyState(VK_RETURN))
		return;
		input+=temp;
		cout<<"*";
		}
	}
	bool Compare()
	{
	if(password.length()!=input.length())
		return false;
		for(usingned int i=0;i<=input.length();i++)
		{
		if(password[i]!=input[i])
			return false;
		}
		return true;
	}
};

int main()
{
	Password pass("gabehabe");
	pass.input();
	if(pass.Compare())
	cout<<"\nThat's correct!";
	else
	cout<<"\n That's wrong";
	cin.get();
	return EXIT_SUCCESS;

}


