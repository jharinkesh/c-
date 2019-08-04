	 /*program for 0-9 counter in 7 segment display using P1 port
connection 
a-p1.0
b-p1.1
c-p1.2
d-p1.3
e-p1.4
f-p1.5
g-p1.6
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
	   P3=0x01;
  while(1)
{
  P1=0x00;
  delayms(1000);
  P1=0x3F;
  delayms(10000);
  P1=0x06;
  delayms(10000);
  P1=0x5B;
  delayms(10000);
  P1=0x4F;
  delayms(10000);
  P1=0x66;
  delayms(10000);
  P1=0x6D;
  delayms(10000);
  P1=0x7D;
  delayms(10000);
  P1=0x07;
  delayms(10000);
  P1=0x7F;
  delayms(10000);
  P1=0x6F;
 delayms(10000);
}


}
