
#include<iostream.h>
#include<conio.h>
  void main()
  {
  clrscr();
  int a[7];
  for(int i=1;i<8;i++)
  {
  cin>>a[i];
  }
    int t=a[1];
    for(int j=1;j<8;j++)
  {
  if(a[j]<t)
  {
   t=a[j];

   }
   }
   cout<<"\n  min is "<<t;







  getch();
  }