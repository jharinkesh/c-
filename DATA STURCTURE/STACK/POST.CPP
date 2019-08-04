//PROGRAM FOR POSTFIX EVALUATION
//DEVELOPED BY BABA TECHNOLOGIES
#include<iostream.h>
#include<stdio.h>
#include<conio.h>
class postfix
{
public:
char s[100];
int s1[100];
char ch;
int top;
postfix()
{
top=-1;
}
void input()
{
cout<<"\nenter posfix exp";
ch=getchar();
while(ch!=')')
{
s[++top]=ch;
ch=getchar();
}
}

void eval()                             //BABA TECHNOLOGIES
{
int s11=top;
int s2=0;
int top1=-1;
while(s2<=s11)
{
if(s[s2]=='+')
{
s1[top1-1]=s1[top1-1]+s1[top1];
top1=top1-1;
}
if(s[s2]=='*')
{
s1[top1-1]=s1[top1-1]*s1[top1];
top1=top1-1;
}


if(s[s2]=='/')
{
s1[top1-1]=s1[top1-1]/s1[top1];
top1=top1-1;
}

if(s[s2]=='-')
{
s1[top1-1]=s1[top1-1]-s1[top1];
top1=top1-1;
}

 if((s[s2]>='0')&&(s[s2]<='9'))              //BABA TECHNOLOGIES
{
 s1[++top1]=s[s2]-48;
 }
s2++;
}
cout<<"\nvalue is : "<<s1[top1];
}


};
void main()
{
clrscr();
postfix p;
p.input();
p.eval();
getch();
}

//ALL RIGHTS RESERVED BABA TECHNOLOGIES,BHOPAL 07898223036