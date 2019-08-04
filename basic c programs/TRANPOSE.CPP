#include<malloc.h>
#include<stdio.h>
#include<conio.h>
void main()
{
int **p,**q,i,j,r,c;
clrscr();
printf("\n enter the row & colmn  ");
scanf("%d%d",&r,&c);
for(i=0;i<r;i++)
{
p[i]=(int *)calloc(c,sizeof(2));
q[i]=(int *)calloc(c,sizeof(2));
}


printf("\n enter the elements  ");
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
scanf("%d",&p[i][j]);

}
}



printf("\n enter the elements  ");
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
 q[i][j]=p[j][i];
 }
 }






printf("\n elements  are  \n");
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
  printf("%d ",*(*(q+i)+j));

}
printf("\n");
}



getch();
}


