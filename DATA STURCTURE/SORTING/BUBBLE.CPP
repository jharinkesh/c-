
#include<iostream.h>
#include<conio.h>
  void main()
  {
  int a[7];
  for(int i=1;i<8;i++)
  {
  cin>>a[i];
  }
  int t;
  for(i=1;i<8;i++)
  {
  for(int j=1;j<8;j++)
  {
  if(a[j]>a[i])
  {
   t=a[i];
   a[i]=a[j];
   a[j]=t;
   }
   }
   }
   cout<<"\n  display  \n";
   for(i=1;i<8;i++)
   {
   cout<<a[i]<<" ";
   }







  getch();
  }