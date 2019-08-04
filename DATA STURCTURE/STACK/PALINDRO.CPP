//program for palindrom 
//DEVELOPED BY BABA TECHNOLOGIES
#include<iostream.h>
#include<conio.h>
class palin
{
public:
int i,n;
char a[10];
void push()           //entering string elements
{
cout<<"\nenter size of string";
cin>>n;
cout<<"\nEnter string:";
for(i=1;i<=n;i++)                   //BABA TECHNOLOGIES
{
cin>>a[i];
}  }

void disp()
{
for(i=n;i>=1;i--)// for reverse string
{
cout<<a[i]<<" ";
}}
void check()
{                                  //BABA TECHNOLOGIES
int count=0,count1=0;
for(i=n;i>=1;i--)// for checking palindrome
{
if(a[i]==a[n-i+1])
count=count+1;
else
count1=1;
}
if(count==n)
cout<<"\npalindrom";
if(count1==1)
cout<<"\n no palindrom";
}};

void main()                       //BABA TECHNOLOGIES
{
clrscr();
palin p;
p.push();
p.disp();
p.check();
getch();
}

//COPYRIGHTS RESERVED BY BABA TECHNOLOGIES,BHOPAL.07898223036