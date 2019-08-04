#include<dos.h>
#include<stdio.h>
#include<conio.h>
void bin(int a[],int beg,int end,int key);
void main()
{
clrscr();
int a[10],i,key;
printf("\n entering elements ");
for(i=0;i<10;i++)
{
scanf("%d",&a[i]);
}
printf("\n enter the key value  ");
scanf("%d",&key);
bin(a,0,9,key);
getch();
}

void bin(int a[10],int beg,int end,int key)
{
int mid;
mid=(beg+end)/2;
if(a[mid]==key)
{
printf("\n item found at location %d",mid+1);
sleep(2);
return;
}
if(a[mid]<key)
{
beg=mid+1;
bin(a,beg,end,key);
}
else
{
end=mid-1;
bin(a,beg,end,key);
}
}