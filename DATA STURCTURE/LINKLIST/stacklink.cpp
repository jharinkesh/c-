#include<stdio.h>
#include<conio.h>

struct node{

int data;

struct node *link;
};
struct node *top=NULL;
struct node *head=NULL;
class stacklink{

public :


    void insert(int p){

    struct node *n1;
    if(top==NULL)
    {

        n1=new node;
        n1->data=p;
        n1->link=NULL;
        top=n1;
        head=n1;

    }
        else{
            n1=new node;
            n1->data=p;
            top->link=n1;
            top=n1;
            top->link=NULL;
            }


    }

    void disp(){

    struct node *n1;
    n1=head;
    printf("\n elelments are \n\n")
    ;
    while(n1->link!=NULL)
    {
        printf(" %d ",n1->data);
        n1=n1->link;
    }
    printf(" %d ",n1->data);

    }

    void pop(){
    struct node *n1,*n2;

    n1=head;

    while(n1->link!=NULL)
    {   n2=n1;
        n1=n1->link;

    }

    n2->link=NULL;
    top=n2;
    delete(n1);



    }



};



int main(){
stacklink s;

s.insert(4);
s.insert(5);
s.insert(6);
s.insert(7);
s.insert(8);
s.insert(9);
s.disp();
getch();
s.pop();

s.disp();
getch();
s.pop();

s.disp();
return 0;
}
