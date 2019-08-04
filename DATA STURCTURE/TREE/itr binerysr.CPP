 #include<iostream.h>
 #include<dos.h>
 #include<stdio.h>
 #include<conio.h>

 void main()
 {
 clrscr();
 int a[9],item,mid,start,end;
 cout<<"\n enter elements  ";
 for(int i=0;i<9;i++)
 {
 cin>>a[i];
 }

 printf("\n enter  key  value ");
 scanf("%d",&item);
 start=0;
 end=8;
 mid=(start+end)/2;

 while(start<=end)
 {
 mid=(start+end)/2;
 if(item==a[mid])
 printf("\n item found at locan %d",(mid+1));
 if(item>a[mid])
 start=mid+1;
 else
 end=mid-1;
 }

 getch();
 }

