#include<stdio.h>
#include<conio.h>
void main()
{
int a[2][2],b[2][2],c[2][2],i,j,k;
clrscr();
printf("\n enter the elements  of matrix one  ");
for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
{

scanf("%d",&a[i][j]);
}}
printf("\n enter the elements  of matrix 2 ");
for(j=0;j<2;j++)
{
for(i=0;i<2;i++)
{
scanf("%d",&b[j][i]);
}}
int m1=(a[0][0]+a[1][1])*(b[0][0]+b[1][1]);
int m2=(a[1][0]+a[1][1])*b[0][0];
int m3=a[0][0]*(b[0][1]-b[1][1]);
int m4=a[1][1]*(b[1][0]-b[0][0]);
int m5=(a[0][0]+a[0][1])*b[1][1];
int m6=(a[1][0]-a[0][0])*(b[0][0]+b[0][1]);
int m7=(a[0][1]-a[1][1])*(b[1][0]+b[1][1]);
printf("\n  ______%d%d%d%d%d%d%d",m1,m2,m3,m4,m5,m6,m7);
c[0][0]=m1+m4+m7-m5;
c[0][1]=m3+m5;
c[1][0]=m2+m4;
c[1][1]=m1+m3-m2+m6;

printf("\n\n\n");
for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
{

printf("%d",c[i][j]);
printf("   ");
}
printf("\n");
}


getch();

}