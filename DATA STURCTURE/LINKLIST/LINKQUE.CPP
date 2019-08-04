//PROGRAM FOR LINKED QUQUE
//DEVELOPED BY //BABA TECHNOLOGIES
#include<iostream.h>
#include<conio.h>
struct node
{                                    //BABA TECHNOLOGIES
int data;
struct node *link;
};

struct node *front=NULL,*rear=NULL;
class que
{
public:
void create()
{
struct node *n1;
char ch;int p;
if((front==NULL)&&(rear==NULL))
{
n1=new node;
cout<<"\nenter data";
cin>>p;
n1->data=p;
n1->link=NULL;                            //BABA TECHNOLOGIES
front=rear=n1;
}
cout<<"\ndo u want to enter more data";
cin>>ch;
while(ch!='n'&&ch!='N')
{
n1=new node;
cout<<"\nenter data";
cin>>p;
n1->data=p;
rear->link=n1;
n1->link=NULL;
rear=n1;
cout<<"\ndo u wnt to enter more data";
cin>>ch;
}}
void disp()
{
struct node *n1;
n1=front;
while(n1->link!=NULL)
{
cout<<n1->data<<"->";
n1=n1->link;
}
cout<<n1->data;
}
                                             //BABA TECHNOLOGIES
void insf()
{
struct node *n1;
int p;
n1=new node;
cout<<"\nenter data";
cin>>p;
n1->data=p;
n1->link=front;
front=n1;
}


void dltf()
{
cout<<"\n";
struct node *n1;
n1=front;
front=front->link;
delete(n1);
}

};
void main()                                        //BABA TECHNOLOGIES
{
clrscr();
que p;
p.create();
p.disp();
p.dltf();
p.disp();
p.insf();
p.disp();
getch();
}


//ALL RIGHTS RESERVED BABA TECHNOLOGIES,BHOPAL 07898223036