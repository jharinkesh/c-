#include<conio.h>
#include<stdio.h>
#include<iostream.h>

void main()
{
int a[6];

for(int i=0;i<6;i++)
scanf("%d",&a[i]);

int t;

for(i=0;i<6;i++)
{
for(int j=0;j<5;j++)
{
if(a[j]>a[j+1])
{
t=a[j];
a[j]=a[j+1];
a[j+1]=t;
}

}

cout<<"\n";

for(i=0;i<6;i++)
cout<<"  "<<a[i];

}



getch();

}