//program on single linklist
//DEVELOPED BY BABA TECHNOLOGIES
#include<iostream.h>
#include<conio.h>
struct node
{
int data;
struct node *link;
};
struct node *head=NULL;
class slink                     //BABA TECHNOLOGIES
{
public:
int p;
void create()
{
struct node *n1,*n2;
char ch;
if(head==NULL)
{
n1=new node;
cout<<"\nneter data";           //BABA TECHNOLOGIES
cin>>p;
n1->data=p;
n1->link=NULL;
head=n1;
cout<<"\ndo u want to enter more data";
cin>>ch;
while(ch!='n'&&ch!='N')
{
n2=new node;
cout<<"\nenter data";
cin>>p;
n2->data=p;
n1->link=n2;
n2->link=NULL;                  //BABA TECHNOLOGIES
n1=n2;
cout<<"\ndo u want to enter more data";
cin>>ch;
}}}
void disp()
{
struct node *n1;
n1=head;
while(n1->link!=NULL)
{
cout<<n1->data<<"->";
n1=n1->link;
   }
   cout<<n1->data;
   }
                                //BABA TECHNOLOGIES
void addl()
{
struct node *n1,*n2;
n1=head;
while(n1->link!=NULL)
{
n1=n1->link;
}
n2=new node;
cout<<"\nenter data";
cin>>p;
n2->data=p;
n1->link=n2;
n2->link=NULL;
}

void addf()                     //BABA TECHNOLOGIES
{
struct node *n1;
n1=new node;
cout<<"\nenter data";
cin>>p;
n1->data=p;
n1->link=head;
head=n1;
}

void insb()
{
struct node *n1,*n2,*temp;
n1=head;
temp=new node;
cout<<"\nenter the value befor u want to ins";
cin>>p;
while(n1->data!=p&&n1->link!=NULL)
{
temp=n1;
n1=n1->link;
}
n2=new node;                   //BABA TECHNOLOGIES
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
cout<<"\nenter the value after u want to ins";
cin>>p;
while(n1->data!=p&&n1->link!=NULL)
{
n1=n1->link;
}
n2=new node;
cout<<"\nenter data";
cin>>p;
n2->data=p;                    //BABA TECHNOLOGIES
n2->link=n1->link;
n1->link=n2;
}

void inslo()
{
int pos,c=1;
struct node *n1,*n2,*temp;
n1=head;
cout<<"\nenter the position to insert";
cin>>pos;
temp=new node;
while(n1->link!=NULL)
{
if(c==pos)
goto l;
else
{
temp=n1;
}
n1=n1->link;
c++;
}
l:n2=new node;
cout<<"\nenter data";                   //BABA TECHNOLOGIES
cin>>p;
n2->data=p;
n2->link=n1;
temp->link=n2;
}
void dltf()
{
struct node *n1;
n1=head;
head=n1->link;
delete(n1);
}
void dltl()
{
struct node *n1,*temp;
n1=head;
while(n1->link!=NULL)
{
temp=n1;
n1=n1->link;
}
temp->link=NULL;
delete(n1);
}

void dltp()
{
int pos,c=1;
struct node *n1,*temp;
n1=head;
cout<<"\nenter position u want to delete";
cin>>pos;
while(n1->link!=NULL)                   //BABA TECHNOLOGIES
{
if(c==pos)
break;
else
temp=n1;
n1=n1->link;
c++;
}
temp->link=n1->link;
n1->link=NULL;
delete(n1);
}
};
void main()
{
clrscr();
slink p;
p.create();
p.disp();                             //BABA TECHNOLOGIES
m:cout<<"\n\nselect operation";
cout<<"\n\n1.addl 2.addf 3.insb 4.insa 5.inslo 6.exit 7.dltf 8.dltl 9.dltp";
int ph;
cin>>ph;
switch(ph)
{
case 1:
p.addl();
p.disp();
goto m;
break;
case 2:
p.addf();
p.disp();
goto m;
break;
case 3:
p.insb();
p.disp();
goto m;
break;
case 4:
p.insa();
p.disp();
goto m;                            //BABA TECHNOLOGIES
break;
case 5:
p.inslo();
p.disp();
goto m;
break;
case 7:
p.dltf();
p.disp();
goto m;
break;
case 8:
p.dltl();
p.disp();
goto m;
break;
case 9:
p.dltp();
p.disp();
goto m;
break;
default:
return;
}
getch();
}





//ALL RIGHTS RESERVED BY BABA TECHNOLOGIES,BHOPAL 07898223036