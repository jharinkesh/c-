#include<dos.h>
#include<iostream.h>
#include<conio.h>
   void qc(int a[],int l,int h);
int a[7],l,h,low,high,t,k;
void main()
{
clrscr();
cout<<"\n enter elements ";
for(int i=0;i<7;i++)
{
cin>>a[i];
}

qc(a,0,6);
cout<<"\n\n\t\t";
for(i=0;i<7;i++)
{
cout<<a[i]<<" ";
}
getch();
}
void qc(int a[],int l,int h)
{
low=l;high=h;
k=a[(low+high)/2];
do
{
 while(k>a[low])
 {
 low++;
 }
 while(k<a[high])
 {
 high--;
 }

 if(low<=high)
 {
 t=a[low];
 a[low++]=a[high];
 a[high--]=t;
 }
 }while(low<=high);

 if(l<high)
 qc(a,l,high);
 if(low<h)
 qc(a,low,h);
 }

