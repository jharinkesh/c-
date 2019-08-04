#include<stdio.h>

int sow(){

printf("\n hello bhai!!!!!!!");
return 0;
}


int main(){

int (*a)();
a=sow;
printf("\n address of the function is %u",sow);
(*a)();

return 0;
}
