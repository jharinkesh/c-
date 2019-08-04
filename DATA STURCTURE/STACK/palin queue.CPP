//program for palindrom using queue
#include<iostream.h>
#include<conio.h>
class queue
{
  public:
  int front,rear,n,value;
  int a[10];
  queue()
  {
  rear=1;
  }
  void insert()
  {
  cout<<"enter the no of enteries to make";
  cin>>n;
  if(n<10)
  {
  cout<<"enter values";
  for(int i=1;i<=n;i++)
  {
  cin>>value;
  a[rear++]=value;
  }
  }
 // cout<<rear;
  }

  void disp()
  {
  cout<<"value is";
  for(int i=1;i<rear;i++)
  {
  cout<<a[i];
  }
  }

void  palin()
{       int count,count1=0;
 int n=rear;
for(int i=rear;i>=1;i--)
{
if(a[i]==a[rear-i])
count=count+1;
else
count=1;
}
if(count==n)
cout<<"\tis a palindrom";
if(count==1)
cout<<"not a palin";
}
};
void main()
{       clrscr();
queue q;
q.insert();
q.disp();
q.palin();
getch();
}