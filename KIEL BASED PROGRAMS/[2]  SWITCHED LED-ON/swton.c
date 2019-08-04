//program for LED on using switch
//switch connected with P3^0
//LED connected with P1^0;
#include<regx51.h>
 sbit swtch=P3^0;
void main()			
{	
	swtch=1;

	while(1)
	{
	   if(swtch==1)
	   P1=0x01;
	   else
	   P1=0x00;



	}



}