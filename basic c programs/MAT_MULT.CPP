#include<malloc.h>
#include<stdio.h>
#include<conio.h>
int main()
{
int **p,**q,**r,i,j,r1,c1,r2,c2,k;
//clrscr();
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

  if(c1==r2)
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

  printf("a[%d][%d]  ",i,j);
  scanf("%d",&p[i][j]);
  }
  }


  printf("\n enter values of mat2  ");

  for(i=0;i<r1;i++)
  {
  for(j=0;j<c1;j++)
  {
  printf("b[%d][%d]  ",i,j);

  scanf("%d",&q[i][j]);
  }
  }


  for(i=0;i<r1;i++)
  {
  for(j=0;j<c2;j++)
  {
     r[i][j]=0;
     for(k=0;k<c1;k++)
     {
     r[i][j]=r[i][j]+p[i][k]*q[k][j];
     }
     }
     }

  printf("\n result is \n ");
  for(i=0;i<r1;i++)
  {
  for(j=0;j<c2;j++)
  {
  printf("%d ",*(*(r+i)+j));
  }
   printf("\n");
  }



  }
  getch();
  }
