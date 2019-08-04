/*program for alternate LED ON-OF with P1
p1.7  p1.7  p1.5  p1.4  p1.3  p1.2  p1.1  p1.0
on    off    on   off	 on   off    on   off

1 second later

p1.7  p1.7  p1.5  p1.4  p1.3  p1.2  p1.1  p1.0
off    on   off	 on   off    on   off	  on

*/


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
	P1=0xAA;
	delayms(1000);
	P1=0x55;
	delayms(1000);



   }



}