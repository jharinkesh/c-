#include<regx51.h>

sbit swtc=P1^0;	    //act as a switch as clockwise
sbit swta=P1^1;		//act as a switch as anticlockwise

void motor(int i)	  //function for driving motor
{
if(i==1)
P3=0x06;
else if(i==2)
P3=0x09;
else 
P3=0x00;
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