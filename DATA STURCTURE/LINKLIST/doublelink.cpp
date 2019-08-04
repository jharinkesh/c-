#include<stdio.h>
#include<conio.h>
#include<malloc.h>
struct node{
int data;
struct node *link1,*link2;
};

struct node *head=NULL;



class dlink{
public:

void create(){

struct node *n1,*n2;


if(head==NULL){

    n1=(node *)calloc(1,sizeof(node));

    printf("\n enter the data  ");
    scanf("%d",&n1->data);
    head=n1;
    n1->link1=NULL;
    n1->link2=NULL;

   char ch;

   printf("\n do u want to insert more data ");
   ch=getch();

   while(ch!='n'&&ch!='N')
   {
       n2=(node *)calloc(1,sizeof(node));
       printf("\n enter the data  ");
       scanf("%d",&n2->data);

       n1->link2=n2;
       n2->link1=n1;
       n2->link2=NULL;
       n1=n2;

       printf("\n do u want to insert more data ");
       ch=getch();
   }

   }}


void disp(){

struct node *n1;
printf("\n elements are \n");
n1=head;
while(n1->link2!=NULL)
{
    printf("%d ",n1->data);
    n1=n1->link2;
}
printf("%d ",n1->data);


}



void addf(){
struct node *n1;

n1=(node *)calloc(1,sizeof(node));

    printf("\n enter the data  ");
    scanf("%d",&n1->data);
    n1->link1=NULL;
    n1->link2=head;
    head->link1=n1;
    head=n1;

}

void addl(){
struct node *n1,*n2;

n1=(node *)calloc(1,sizeof(node));

    printf("\n enter the data  ");
    scanf("%d",&n1->data);

    n2=head;


    while(n2->link2!=NULL)
        n2=n2->link2;


    n1->link1=n2;
    n1->link2=NULL;
    n2->link2=n1;

}
void addlo(){
struct node *n1,*n2;

n1=(node *)calloc(1,sizeof(node));
    int lo,p=1;

    printf("\n enter the location u want to insert ");
    scanf("%d",&lo);

    printf("\n enter the data  ");
    scanf("%d",&n1->data);

    n2=head;


    while(p<lo){
        n2=n2->link2;
        p++;
    }


    n1->link1=n2->link1;
    n1->link2=n2;

    n2->link1->link2=n1;
    n2->link1=n1;
}


void delf(){
head->link2->link1=NULL;
head=head->link2;
}

void dell(){

struct node *n1;

n1=head;

while(n1->link2!=NULL){
        n1=n1->link2;
    }

n1->link1->link2=NULL;

delete n1;

}


void dello(){
    struct node *n2;
    int lo,p=1;

    printf("\n enter the location u want to delete ");
    scanf("%d",&lo);
     n2=head;


    while(p<lo){
        n2=n2->link2;
        p++;
    }

    n2->link1->link2=n2->link2;
    n2->link2->link1=n2->link1;
    delete n2;
}



};



int main(){

dlink d;
d.create();
d.disp();
//d.addf();
//d.addl();
//d.addlo();
//d.delf();
//d.dell();
d.dello();

d.disp();
return 0;
}
