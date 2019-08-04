#include<iostream>
#include<conio.h>

showfab(int);

 main()
{
 int n,i;

 cout<<"Enter the total elements in the series : ";
 cin>>n;
 cout<<"\nThe Fibonacci series is:\n";
 for(i=0;i<n;i++)
 {
  cout<<showfab(i)<<" ";
 }

}

showfab(int n)
{
 if(n==0)
 return 0;
 else if(n==1)
 return 1;
 else
 return showfab(n-1)+showfab(n-2);
}
