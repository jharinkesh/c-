// program for LED on sequentially with P1 port	uing delay


#include<regx51.h>
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

while(1)
{
P1=0x00;
delayms(700);

P1=0x01;
delayms(700);

P1=0x02;
delayms(700);

P1=0x04;
delayms(700);

P1=0x08;
delayms(700);

P1=0x10;
delayms(700);

P1=0x20;
delayms(700);

P1=0x40;
delayms(700);


P1=0x80;
delayms(700);


}

}