//program on DOUBLE linklist
//DEVELOPED BY BABA TECHNOLOGIES
#include<iostream.h>
#include<conio.h>
struct node
{
int data;
struct node *llink,*rlink;
};
struct node *head=NULL;
class dlink
{
public:                    //BABA TECHNOLOGIES
int p;
void create()
{
struct node *n1,*n2;
char ch;
n1=new node;
cout<<"\nenter data";
cin>>p;
n1->data=p;
n1->llink=NULL;
n1->rlink=NULL;
head=n1;
cout<<"\n do u want to enter more data  ";
cin>>ch;
while(ch!='n'&&ch!='N')
{
n2=new node;                 //BABA TECHNOLOGIES

cout<<"\nenter data";
cin>>p;
n2->data=p;
n1->rlink=n2;
n2->llink=n1;
n2->rlink=NULL;
n1=n2;
cout<<"\n do u want to enter more data  ";
cin>>ch;
}
}

void disp()
{
struct node *n1;
n1=head;
while(n1->rlink!=NULL)
{
cout<<n1->data<<"->";
n1=n1->rlink;
}
cout<<n1->data;
}

void insf()
{
struct node *n1;
n1=new node;
cout<<"\nenter data";          //BABA TECHNOLOGIES

cin>>p;
n1->data=p;
head->llink=n1;
n1->rlink=head;
n1->llink=NULL;
head=n1;
}

void insl()
{
struct node *n1,*n2;
n1=head;
while(n1->rlink!=NULL)
{
n1=n1->rlink;
}
n2=new node;
cout<<"\nenter data";
cin>>p;
n2->data=p;
n1->rlink=n2;
n2->llink=n1;                      //BABA TECHNOLOGIES

n2->rlink=NULL;
}

void insb()
{
struct node *n1,*n2;
n1=head;
cout<<"\n enter the value before u want to insert ";
cin>>p;
while(n1->data!=p&&n1->rlink!=NULL)
{
n1=n1->rlink;
}
n2=new node;
cout<<"\nenter data";
cin>>p;
n2->data=p;
n2->rlink=n1;
n2->llink=n1->llink;
n1->llink->rlink=n2;
n1->llink=n2;
}

void insa()
{
struct node *n1,*n2;           //BABA TECHNOLOGIES

n1=head;
cout<<"\nenter the value after u want to insert  ";
cin>>p;
while(n1->data!=p&&n1->rlink!=NULL)
{
n1=n1->rlink;
}
n2=new node;
cout<<"\nenter data";
cin>>p;
n2->data=p;
n2->llink=n1;
n2->rlink=n1->rlink;
n1->rlink=n2;
n1->rlink->llink=n2;
}

void inslo()
{
struct node *n1,*n2;
int pos,c=1;
n1=head;
cout<<"\nenter the posin at which u want to insert  ";
cin>>pos;
while(n1->rlink!=NULL)      //BABA TECHNOLOGIES

{
if(c==pos)
break;
else
n1=n1->rlink;
c++;
}
n2=new node;
cout<<"\nenter data  ";
cin>>p;
n2->data=p;
n2->rlink=n1;
n1->llink->rlink=n2;
n2->llink=n1->llink;
n1->llink=n2;
}

void dltf()
{
struct node *n1;
n1=head;
n1->rlink->llink=NULL;
head=n1->rlink;
n1->rlink=NULL;
delete(n1);
}                                 //BABA TECHNOLOGIES


void dltl()
{
struct node *n1;
n1=head;
while(n1->rlink!=NULL)
{
n1=n1->rlink;
}
n1->llink->rlink=NULL;
delete(n1);
}

void dltp()
{
struct node *n1;
int pos,c=1;
n1=head;
cout<<"\n enter the position u want to delete  ";
cin>>pos;
while(n1->rlink!=NULL)
{
if(c==pos)                          //BABA TECHNOLOGIES

break;
else
n1=n1->rlink;
c++;
}
n1->llink->rlink=n1->rlink;
n1->rlink->llink=n1->llink;
delete(n1);
}


};
void main()
{
clrscr();                  //BABA TECHNOLOGIES

int o;
dlink p;
p.create();
p.disp();
cout<<"\n\t1.insf 2.insl 3.insb 4,insa 5.inslo 6.exit 7.dltf 8.dltl 9.dltp";
cout<<"\n\tselect operation\n";
cin>>o;
switch(o)
{
case 1:
p.insf();
p.disp();
break;
case 2:
p.insl();
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
case 5:                        //BABA TECHNOLOGIES

p.inslo();
p.disp();
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