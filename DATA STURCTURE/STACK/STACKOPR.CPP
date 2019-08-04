#include<iostream.h>
#include<conio.h>
#include<stdio.h>

class stackopr{
public:
int stack[10],top;

stackopr(){
top=-1;
}

void push(int n){

if(top>=10)
{
printf("\n stack is full");
return;
}
else
stack[++top]=n;
}


void disp(){
if(top==-1)
cout<<"\n stack is empty";
else{
cout<<"\n elements are\n";
for(int i=top;i>=0;i--)
printf("%d\n",stack[i]);

cout<<"\nTop= "<<top;
}
}


void pop(){

if(top==-1)
printf("\n stack is empty  ");

else

cout<<"\n"<<stack[top--]<<" item deleted";


}



};

main(){
clrscr();
char ch;
int n;

stackopr st;
l:printf("\n 1.push \n 2.pop \n 3.disp \n 4.exit");
ch=getch();

switch(ch){

case '1':
printf("\n enter the number u want to push  ");
scanf("%d",&n);
st.push(n);
st.disp();
getch();
break;

case '2':
st.pop();
st.disp();
getch();
break;

case '3':
st.disp();
getch();
break;

case '4':
return  0;

default:
clrscr();
goto l;
}
clrscr();
goto l;

}


