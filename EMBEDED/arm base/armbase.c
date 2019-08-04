#include<regx51.h>

sbit swtc=P1^0;
sbit swta=P1^1;
 
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

void motor(int i)
{
	while((swta==1)||(swtc==1))
	{
	   if(i==1)
	   {
		    P3=0x0c;
		    delayms(2000);
		    P3=0x06;
	     	delayms(2000);
		
		    P3=0x03;
			delayms(2000);
			 	
		    P3=0x09;
		    delayms(2000);
		}
		else if(i==2)
		{
			   P3=0x09;
			    delayms(2000);
			    P3=0x03;
		     	delayms(2000);
			
			    P3=0x06;
				delayms(2000);
				 	
			    P3=0x0C;
			    delayms(2000);
		}
  }

}


void main()
{
swtc=1;
swtc=0;
swta=1;
swta=0;


while(1)
{

if((swtc==1)&&(swta==1))
P3=0x00;

else if((swtc==0)&&(swta==0))
P3=0x00;

else if((swtc==1)&&(swta==0))
motor(1);

else if((swtc==0)&&(swta==1))
motor(2);

else
P3=0x00;
}

}