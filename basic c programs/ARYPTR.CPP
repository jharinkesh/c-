//accessing array using pointer//
#include<stdio.h>
#include<conio.h>
void main()
{
int *p,a[]={1,2,3,4,5,6,7},i;
clrscr();
p=a;
 for(i=0;i<7;i++)
 {
 printf("%d ",*(p+i));
 }

getch();
}