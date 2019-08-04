//PROGRAM FOR BINERY SEARCH
////DEVELOPED BY BABA TECHNOLOGIES
#include<iostream.h>
#include<conio.h>
int binsearch(int a[],int max,int min,int key)
{
int mid;
do
{

	mid=(max+min)/2 ;        //BABA TECHNOLOGIES
	if(a[mid]==key)
	return mid;
	if(a[mid]>key)
	max=mid-1;
	else
	min=mid+1;
} while(min<=max) ;
return -1;
}
void main()
{
int a[]={10,20,30,40,50};
int min=1,max=5,key;
clrscr();
cout<<"enter the no which u want to search";
cin>>key;
int r =  binsearch( a,5,1,key);
cout<<r+1;
   getch();
}

//ALL RIGHTS RESERVED BABA TECHNOLOGIES,BHOPAL 07898223036