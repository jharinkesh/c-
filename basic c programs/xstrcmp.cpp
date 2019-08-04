#include<stdio.h>
#include<iostream>
using namespace std;
int xstrcmp(char *a,char *b)
{
char *a1=a;
char *b1=b;
int l=0,lb=0,f;

while(*a!='\0')
{
    l++;
    a++;

}

while(*b1!='\0')
{
    lb++;
    *b1++;
}

f=l;
if(l!=lb)
    return 1;


l=0;
while(lb>0)
{

if(*a1==*b)
    l++;
    a1++;
    b++;
    lb--;
}


if(l==f)
    return 0;
else
    return 1;

}



int main()
{
   // char *a="hello";
   // cout<<"\n"<<a[2];
    //cout<<"hello";
    cout<<"\n"<<xstrcmp("hello","hello");

return 0;
}
