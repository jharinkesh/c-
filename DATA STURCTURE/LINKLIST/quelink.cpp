#include<stdio.h>
#include<conio.h>

struct node{

int data;

struct node *link;
};
struct node *rear=NULL;
struct node *front=NULL;
class stacklink{

public :


    void insert(int p){

    struct node *n1;
    if(front==NULL)
    {

        n1=new node;
        n1->data=p;
        n1->link=NULL;
        rear=n1;
        front=n1;

    }
        else{
            n1=new node;
            n1->data=p;
            rear->link=n1;
            rear=n1;
            rear->link=NULL;
            }


    }

    void disp(){

    struct node *n1;
    n1=front;
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

    front=front->link;
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
