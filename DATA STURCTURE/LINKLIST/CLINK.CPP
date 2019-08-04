//program on CIRCULAR linklist
//DEVELOPED BY BABA TECHNOLOGIES
#include<iostream.h>
#include<conio.h>
struct node
{
int data;
struct node *link;
};
struct node *head=NULL;
class clink
{
public:
int p;                                //BABA TECHNOLOGIES
void create()
{
struct node *n1,*n2;
char ch;
n1=new node;
cout<<"\nenter data";
cin>>p;
n1->data=p;
n1->link=n1;
head=n1;
cout<<"\ndo u wnt to enter more data";
cin>>ch;
while(ch!='n'&&ch!='N')
{
n2=new node;
cout<<"\nenter data";                //BABA TECHNOLOGIES
cin>>p;
n2->data=p;
n2->link=n1->link;
n1->link=n2;
n1=n2;
cout<<"\ndo u wnt to enter more data";
cin>>ch;
}}

void disp()
{
struct node *n1;
n1=head;
while(n1->link!=head)
{
cout<<n1->data<<"->";
n1=n1->link;
}
cout<<n1->data;
}

void insl()
{
struct node *n1,*n2;
n1=head;                                 //BABA TECHNOLOGIES
while(n1->link!=head)
{
n1=n1->link;
}
n2=new node;
cout<<"\nenter data";
cin>>p;
n2->data=p;
n2->link=head;
n1->link=n2;
}

void insf()
{
struct node *n1,*n2;
n1=head;
while(n1->link!=head)
{
n1=n1->link;
}
n2=new node;
cout<<"\nenter data";
cin>>p;
n2->data=p;
n1->link=n2;
n2->link=head;
head=n2;
}

void insb()                                   //BABA TECHNOLOGIES
{
struct node *n1,*n2,*temp;
n1=head;
cout<<"\nenter the val before u wnt to insert";
cin>>p;
while(n1->data!=p)
{
temp=n1;
n1=n1->link;
}
n2=new node;
cout<<"\nenter data";
cin>>p;
n2->data=p;
n2->link=n1;
temp->link=n2;
}

void insa()
{
struct node *n1,*n2;
n1=head;
cout<<"\nenter the val after u wnt to insert";
cin>>p;
while(n1->data!=p)
{
n1=n1->link;                            //BABA TECHNOLOGIES
}
n2=new node;
cout<<"\nenter data";
cin>>p;
n2->data=p;
n2->link=n1->link;
n1->link=n2;
}

void inslo()
{
struct node *n1,*n2,*temp;
n1=head;
int pos,c=1;
cout<<"\nenter the positn at u wnt to insert";
cin>>pos;
while(n1->link!=head)
{
if(c==pos)
break;
else
temp=n1;
n1=n1->link;
c++;
}
n2=new node;
cout<<"\nenter data";
cin>>p;
n2->data=p;
n2->link=temp->link;                              //BABA TECHNOLOGIES
temp->link=n2;
}

void dltf()
{
struct node *n1,*n2;
n1=n2=head;
while(n1->link!=head)
{
n1=n1->link;
}
n1->link=n2->link;
head=n2->link;
delete(n2);
}

void dltl()
{
struct node *n1,*temp;
n1=head;
while(n1->link!=head)
{
temp=n1;
n1=n1->link;
}
temp->link=head;
delete(n1);                             //BABA TECHNOLOGIES
}

void dltp()
{
int pos,k=1;
struct node *n1,*temp;
n1=head;
cout<<"\nenter position u want to delete";
cin>>pos;
while(n1->link!=head)
{
if(k==pos)
break;
else
temp=n1;
n1=n1->link;
k++;
}
temp->link=n1->link;
delete(n1);
}
};
void main()
{
clrscr();
clink p;
p.create();
p.disp();                          //BABA TECHNOLOGIES
cout<<"\nselect operation";
cout<<"\n1.insl 2.insf 3.insb 4.insa 5.inslo 6.exit 7.dltf 8.dltl 9.dltp";
int o;
cin>>o;
switch(o)
{
case 1:
p.insl();
p.disp();
break;
case 2:
p.insf();
p.disp();
break;
case 3:
p.insb();
p.disp();
break;
case 4:
p.insa();
p.disp();
break;
case 5:
p.inslo();
p.disp();                                //BABA TECHNOLOGIES
break;
case 7:
p.dltf();
p.disp();
break;
case 8:
p.dltl();
p.disp();
break;
case 9:
p.dltp();
p.disp();
break;
default:
return;
}
getch();
}


//ALL RIGHTS RESERVED BY BABA TECHNOLOGIES,BHOPAL 07898223036
