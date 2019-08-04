#include<stdio.h>
#include<conio.h>

struct node{
int data;
struct node *link;
};
struct node *head=NULL;

class slink{

public:

    void create(){
    struct node *n1,*n2;


    if(head==NULL){
        n1=new node;

        printf("\n enter the data ");
        scanf("%d",&n1->data);
        head=n1;

        char ch;

        printf("\n do u want to add more data ");
        ch=getch();

        while(ch!='n'&&ch!='N')
        {
            n2=new node;

            printf("\n enter the data  ");
            scanf("%d",&n2->data);

            n1->link=n2;
            n2->link=head;
            n1=n2;

            printf("\n do u want to add more data ");
            ch=getch();


            }}


}

void disp(){
struct node *n1;

n1=head;

printf("\n elements are \n");
while(n1->link!=head)
{
    printf("%d ",n1->data);
    n1=n1->link;

}

printf("%d",n1->data);



}



void addl(){

struct node *n1,*n2;
n1=head;
n2=new node;

printf("\n enter data ");
scanf("%d",&n2->data);

while(n1->link!=head){
    n1=n1->link;
}

n1->link=n2;
n2->link=head;

disp();

}


void addf(){

struct node *n1,*n2;

n1=new node();

n2=head;

while(n2->link!=head)
    n2=n2->link;

printf("\n enter the data ");
scanf("%d",&n1->data);

n1->link=head;
head=n1;
n2->link=head;



disp();
}


void addb(){
struct node *n1,*n2,*n3;
n2=new node();
n1=head;
int p;
printf("\n enter the value before u want to insert  ");
scanf("%d",&p);

printf("\n enter the data");
scanf("%d",&n2->data);

while(n1->data!=p&&n1->link!=head)
{   n3=n1;
    n1=n1->link;

}

n3->link=n2;
n2->link=n1;
disp();

}


void adda(){

struct node *n1,*n2;

n1=head;
n2=new node;
int p;
printf("\n enter the value after u want to add ");
scanf("%d",&p);

printf("\n enter the data ");
scanf("%d",&n2->data);

while(n1->data!=p&&n1->link!=head)
    n1=n1->link;


n2->link=n1->link;
n1->link=n2;
disp();

}


void addlo(){

struct node *n1,*n2,*n3;

n1=head;
n2=new node;
int p;
printf("\n enter the location  u want to add ");
scanf("%d",&p);

printf("\n enter the data ");
scanf("%d",&n2->data);
int i=1;
while(i<p){
    n3=n1;
    n1=n1->link;
i++;
}


n2->link=n1;
n3->link=n2;
disp();



}



void dell(){
struct node *n1,*n2;

n1=head;

while(n1->link!=head){
    n2=n1;
    n1=n1->link;}

n2->link=head;
delete(n1);
disp();



}

void delf(){

struct node *n1;

n1=head;
while(n1->link!=head)
    n1=n1->link;


head=head->link;

n1->link=head;
disp();

}



void dello(){

struct node *n1,*n2;

n1=head;
int p,i=1;

printf("\n enter the lo to del ");
scanf("%d",&p);


while(i<p){
    n2=n1;
n1=n1->link;
i++;
}


n2->link=n1->link;
delete(n1);
disp();



}


void delval(){

struct node *n1,*n2;
int p;
n1=head;
printf("\n enter the value u want to delete ");
scanf("%d",&p);

while(n1->data!=p&&n1->link!=head)
{
    n2=n1;
    n1=n1->link;

}

n2->link=n1->link;
delete(n1);
disp();



}


};





int main(){

slink s;

s.create();
s.disp();
//s.addl();
//s.addf();
//s.addb();
//s.adda();
//s.addlo();
//s.dell();
//s.delf();
//s.dello();
s.delval();
return 0;
}
