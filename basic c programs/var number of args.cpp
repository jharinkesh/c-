#include<stdio.h>
#include<stdarg.h>

int show(int num,...)
{
    va_list ptr;
    int n;
    va_start(ptr,num);
    n=va_arg(ptr,int);

    while(num>0){

    printf("\n %d ",n);
    n=va_arg(ptr,int);

    num--;
    }






}


int main(){

show(4,1,2,3,4);


return 0;
}
