/*program for printing value 8 in 7 segment display using P1 port
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


void main()
{
 P1=0x7F;	  
 P3=0x01;
 
}
