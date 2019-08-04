//program for LED on/off using delay, LED connected with P1^0

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
P1=0x01;
delayms(1000);
P1=0x00;
delayms(1000);



}


}


