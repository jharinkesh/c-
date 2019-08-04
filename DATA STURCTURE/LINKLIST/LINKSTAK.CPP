//PROGRAM FOR POSTFIX EVALUATION
//DEVELOPED BY BABA TECHNOLOGIES
#include<iostream.h>
#include<conio.h>
struct node
{
int data;
struct node *link;
};
struct node *top=NULL;
struct node *top1=NULL;

class links                                  //BABA TECHNOLOGIES
{
public:
int p;
void push()
{
struct node *n1,*n2;//,*mm;
int data;
char ch;
if(top==NULL)
{
n1=new node;
cout<<"\nenter data";
cin>>p;
n1->data=p;
n1->link=NULL;
top=n1;
top1=n1;
}
cout<<"\ndo u want to enter more data";
cin>>ch;
while(ch!='n')
{
n2=new node;
cout<<"\nenter data";                        //BABA TECHNOLOGIES
cin>>p;
n2->data=p;
n2->link=NULL;
top->link=n2;
top=n2;
cout<<"\ndo u want to enter more data";
cin>>ch;
}}
void disp()
{
struct node *top,*temp;
top1=top;
while(top->link!=NULL)
{
cout<<top->data<<"\n";
top=top->link;
}
cout<<top->data;
}

/*void pop()
{
cout<<"\n";                                //BABA TECHNOLOGIES
struct node *n1,*temp1,*temp;
n1=temp;
while(n1->link!=NULL)
{
temp1=n1;
n1=n1->link;
}
temp1->link=NULL;
delete(n1);
}*/
};
void main()
{
clrscr();
links p;
p.push();
p.disp();
//p.pop();
//p.disp();
getch();
}

//ALL RIGHTS RESERVED BABA TECHNOLOGIES,BHOPAL 07898223036