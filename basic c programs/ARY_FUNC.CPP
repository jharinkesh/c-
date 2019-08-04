 //program to passing array thrw function //
 #include<stdio.h>
 #include<conio.h>
 void fun(int *p)
 {
 int j=0;
 printf("\n elements are  ");
 for(;j<5;j++)
 {
 printf("%d ",*(p+j));
 }

 }

 void main()
 {

 int a[5],i;
 clrscr();
 printf("\n enter the elements ");
 for(i=0;i<5;i++)
 {
 scanf("%d",&a[i]);
 }
 fun(a);
 getch();
 }