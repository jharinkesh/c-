#include<stdio.h>
#include<conio.h>
void    det(int p,int x,int y);
int a[5][5],i,j,d=0,m=999,n=999,o=999,p=999;
void main()
{
  clrscr();
  printf("\n enter the elements ");
  for(i=1;i<=3;i++)
    {
      for(j=1;j<=3;j++)
      {
	printf("\na[%d][%d]  :  ",i,j);
	scanf("%d",&a[i][j]);
      }
    }

  det(a[1][1],1,1);
  det(a[1][2],1,2);
  det(a[1][3],1,3);
  printf("\n val of determinant is %d",d);
  getch();
}

   void det(int p,int x,int y)
   {

     for(i=1;i<=3;i++)
     {
	for(j=1;j<=3;j++)
	{
		if((i!=x)&&(j!=y))
		{
		if(m==999)
		m=a[i][j];
		else if(n==999)
		n=a[i][j];
		else if(o==999)
		o=a[i][j];
		else
		p=a[i][j];
		}
	}
     }

     i=(m*p)-(n*o);

     if((x+y)%2==0)
     {
	d=d+(a[x][y]*i);
     }
     else
     {
	d=d-(a[x][y]*i);
     }
     m=999;n=999;o=999;p=999;
   }