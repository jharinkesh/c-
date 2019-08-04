#include<iostream.h>
#include<conio.h>

void main()
{
int a[12]={67,767,222,3,44,76,11,23,44,1,34,21};
static int i,j,k,pass=0,large,bucket[10][10],index,div=1,buk[10],count=0;

large=a[0];

for(i=0;i<10;i++)
{
if(a[i]>large)
large=a[i];
}

while(large>0)
{
pass++;
large=large/10;
}

for(i=0;i<pass;i++)
{

for(j=0;j<12;j++)
{

index=(a[j]/div)%10;
bucket[index][buk[index]]=a[j];
buk[index]=buk[index]+1;
}
count=0;

for(j=0;j<10;j++)
{
for(k=0;k<buk[j];k++)
a[count++]=bucket[j][k];
}

for(j=0;j<10;j++)
{
buk[j]=0;
}

div=div*10;
}


for(i=0;i<12;i++)
cout<<" "<<a[i];


getch();
}