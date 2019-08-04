#include<malloc.h>
#include<stdio.h>
#include<conio.h>
void main()
{
int **p,**q,**r,i,j,r1,c1,r2,c2;
clrscr();
printf("\n enter the size of row and column of mat1 ");
scanf("%d%d",&r1,&c1);
printf("\n enter the number of row & colmn of mat2 ");
scanf("%d%d",&r2,&c2);
for(i=0;i<r1;i++)
   {
   p[i]=(int *)calloc(c1,sizeof(int));
   }

   for(i=0;i<r2;i++)
   {
   q[i]=(int *)calloc(c2,sizeof(int));
   }
  if((r1==r2)&&(c1==c2))
  {
  printf("\n this matrix can be added ");
  for(i=0;i<r1;i++)
  {
    r[i]=(int *)calloc(c2,sizeof(int));
    }

  printf("\n enter values of mat1  ");
  for(i=0;i<r1;i++)
  {
  for(j=0;j<c1;j++)
  {
  scanf("%d",&p[i][j]);
  }
  }


  printf("\n enter values of mat2  ");

  for(i=0;i<r1;i++)
  {
  for(j=0;j<c1;j++)
  {
  scanf("%d",&q[i][j]);
  }
  }
  for(i=0;i<r1;i++)
  {
  for(j=0;j<c1;j++)
  {
  r[i][j]=p[i][j]+q[i][j];
  }
  }

  printf("\n the addition  is  \n");

  for(i=0;i<r1;i++)
  {
  for(j=0;j<c1;j++)
  {
  printf("%d ",*(*(r+i)+j));
  }
  printf("\n");
  }



  }
  getch();
  }