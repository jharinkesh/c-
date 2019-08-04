#include<stdio.h>
#include<conio.h>
void main()
{
int x,y,l,w,i;
clrscr();
printf("\n program for rectangle ");
printf("\n enter the initial co-ordinate  ");
scanf("%d%d",&x,&y);
printf("\n enter the length and width  ");
scanf("%d%d",&l,&w);
clrscr();
w=w/2;
gotoxy(x,y);
printf("%c",218);

for(i=x+1;i<=x+l;i++)
{
printf("%c",196);
}

printf("%c",191);

for(i=y+1;i<=y+w;i++)
{
gotoxy(x,i);
printf("%c",179);
}
gotoxy(x,i);

printf("%c",192);

for(i=y+1;i<=y+w;i++)
{
gotoxy(x+l+1,i);
printf("%c",179);
}
gotoxy(x+1+l,i);
printf("%c",217);

for(i=x+1;i<=x+l;i++)
{
gotoxy(i,y+w+1);
printf("%c",196);
}


getch();
}