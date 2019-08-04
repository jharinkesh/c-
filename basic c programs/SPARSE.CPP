#include<malloc.h>
#include<stdio.h>
#include<conio.h>
void main()
{
int **b,i,j,r,c,s=0,s1=0;
clrscr();
printf("\n enter the value of rows  & column  ");
scanf("%d%d",&r,&c);
	for(i=0;i<r;i++)
	{
	b[i]=(int *)calloc(c,sizeof(2));
	}

printf("\n enter the elements  \n");
	for(i=0;i<r;i++)               //cheking sparse matrix
	{
		for(j=0;j<c;j++)
		{
		scanf("%d",&b[i][j]);
		if(b[i][j]==0)
		s=s+1;
		else
		s1=s1+1;
		}
	}



	printf("\n matrix are  \n");    //output
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
		printf("%d ",*(*(b+i)+j));
		}
	printf("\n");
	}




	if(s>s1)
	printf("\n SPARSE MATRIX  ");
	else
	printf("no");

	getch();
	}


