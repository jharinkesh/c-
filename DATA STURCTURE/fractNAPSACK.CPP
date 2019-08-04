#include<iostream.h>
#include<stdio.h>
#include<conio.h>
int item[3],cost[3],ci[3],cap,total=0,i,j,t1=0,t2=0,t3=0;
void main()
{
clrscr();
textcolor(BLUE);
printf("\n enter the capasity  ");
scanf("%d",&cap);
cprintf("\n enter the item's value  ");
for(i=0;i<3;i++)
{
cout<<"\n item["<<i<<"] :   ";
scanf("%d",&item[i]);
cout<<"\n cost["<<i<<"] :   ";
scanf("%d",&cost[i]);
ci[i]=cost[i]/item[i];
cout<<"\n\n";
}
for(i=0;i<3;i++)
{
cout<<item[i]<<"  "<<cost[i]<<"  "<<ci[i]<<"\n";
}




//swaping
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
if(ci[i]>ci[j])
{
t1=item[i];
item[i]=item[j];
item[j]=t1;

t2=cost[i];
cost[i]=cost[j];
cost[j]=t2;

t3=ci[i];
ci[i]=ci[j];
ci[j]=t3;

}}}

cout<<"\n\n";
for(i=0;i<3;i++)
{
cout<<item[i]<<"  "<<cost[i]<<"  "<<ci[i]<<"\n";
}

////////////////////

for(i=0;i<3;i++)
{
if(cap>item[i])
{
 total=total+item[i]*ci[i];
 cap=cap-item[i];
 }
 else
 {
 total=total+cap*ci[i]; }

 }

cout<<"\n\n";
printf("total profit is %d ",total);
getch();
}