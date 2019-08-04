#include<stdio.h>
#include<conio.h>
using namespace std;

main(){
int *a;
int size=5;
a=new int[size];

for(int i=0;i<7;i++)
{
    a[i]=i;

}

for(int i=0;i<7;i++)
{

    printf("%d ",a[i]);

}
getch();
return 0;
}
