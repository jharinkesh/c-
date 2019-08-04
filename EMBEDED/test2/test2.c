#include<regx51.h>


sbit swt=P3^0;

void main()
{	
	swt=1;
	swt=0;
	P1=0x00;
	while(1)
	{
	if(swt==1)
	P1=0x01;
	else 
	P1=0x00;	
	}			  

}