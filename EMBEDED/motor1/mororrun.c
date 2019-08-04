#include<regx51.h>
 sbit swit=P3^0;
void delayms(unsigned int i)
{
 int c=0;
 while(c<i)
 {
  TMOD=0x01;
  TH0=0xFC;
  TL0=0x66;
  TR0=1;
  while(!TF0);
  TR0=0;
  TL0=0;
  c++;
 }

}


void main()
{
P1=0x00;

	swit=1;
	 
  	while(1)
	{
	   if(swit==1)
	   {
		    P1=0x0c;
		    delayms(2000);
		    P1=0x06;
	     	delayms(2000);
		
		    P1=0x03;
			delayms(2000);
			 	
		    P1=0x09;
		    delayms(2000);
		}
		else if(swit==0)
		{
			   P1=0x09;
			    delayms(2000);
			    P1=0x03;
		     	delayms(2000);
			
			    P1=0x06;
				delayms(2000);
				 	
			    P1=0x0C;
			    delayms(2000);
		}
  }
}