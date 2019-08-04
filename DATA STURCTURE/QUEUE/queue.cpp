#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

using namespace std;

int queue[100],front=-1,rear=-1;


class queueopr{
public:
void insert(){
int n;
    printf("\n enter the number ");
    scanf("%d",&n);

if((rear-front)==10)
{
    printf("\n queue is full");
    return;
}

else if(front==-1&&rear==-1)
{
    front=rear=0;
    queue[rear]=n;
}

else{
    queue[++rear]=n;
    printf("\n%d inserted front=%d  rear=%d \n",n,front,rear);
}

}




void disp(){

printf("\n elements are \n\n");

for(int i=front;i<=rear;i++)
    printf("%d ",queue[i]);
 printf("\n\nfront=%d  rear=%d \n",front,rear);

}




void del(){
if(front==-1)
{

    printf("\n queue is empty");
return;
}
else
{
printf("\n%d is deleted ",queue[front++]);
}

}
};



main(){
char ch;
queueopr u;
l:printf("\n 1.insert\n 2.view\n 3.delete \n 4.exit \n\t");
    ch=getch();

    switch(ch){

case '1':
    u.insert();
case '2':
    u.disp();
    break;
case '3':
u.del();
u.disp();
break;
case '4':
return 0;


    }

    getch();
   system("cls");
    goto l;

}
