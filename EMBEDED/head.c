								  #include<reg51.h>
sbit ba=P1^0;
sbit ab=P1^1;
sbit ga=P1^2;
sbit gr=P1^3;
sbit left=P1^4;
sbit right=P1^5;
sbit cl=P1^6;
sbit acl=P1^7;	   


sbit ba0=P3^0;
sbit ba1=P3^1;
sbit ba2=P3^2;
sbit ba3=P3^3;							   


sbit ga0=P3^4;
sbit ga1=P3^5;
sbit ga2=P3^6;
sbit ga3=P3^7;

sbit gr0=P0^0;
sbit gr1=P0^1;
sbit gr2=P0^2;
sbit gr3=P0^3;


sbit ab0=P0^4;
sbit ab1=P0^5;
sbit ab2=P0^6;
sbit ab3=P0^7;	

/*void delayms(unsigned int i)
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
*/



			void main()
			{
		P0=0x00;
		P1=0x00;
		P2=0x00;
		P3=0x00;

	 	  ba=1;
		  ab=1;
		  ga=1;
		  gr=1;
		  left=1;
		  right=1;
		  cl=1;
		  acl=1;

		ba0=1;
		ba1=1;
		ba2=1;
		ba3=1;

	   ga0=1;
	   ga1=1;
		ga2=1;
		ga3=1;

		gr0=1;
	    gr1=1;
		gr2=1;
		gr3=1;

		ab0=1;
		ab1=1;
		ab2=1;
		ab3=1;

		  ba=0;
		  ab=0;
		  ga=0;
		  gr=0;
		  left=0;
		  right=0;
		  cl=0;
		  acl=0;

		ba0=0;
		ba1=0;
		ba2=0;
		ba3=0;

	   ga0=0;
	   ga1=0;
		ga2=0;
		ga3=0;

		gr0=0;
	    gr1=0;
		gr2=0;
		gr3=0;

		ab0=0;
		ab1=0;
		ab2=0;
		ab3=0;


while(1)
{
if((ba==1)&&(cl==1)&&(acl==0))/////////////base arm 
{
ba0=0;
ba1=1;
ba2=0;
ba3=1;
}	

else if((ba==1)&&(cl==0)&&(acl==1))
{
ba0=1;
ba1=0;
ba2=1;
ba3=0;
}	

else if((ba==1)&&(cl==1)&&(acl==1))
{
ba0=1;
ba1=1;
ba2=1;
ba3=1;
}	

else if((ba==1)&&(cl==0)&&(acl==0))
{

ba0=0;
ba1=0;
ba2=0;
ba3=0;

}

else if(ba==0)
{

ba0=0;
ba1=1;
ba2=1;
ba3=0;

}		
						//base arm




if((ga==1)&&(cl==1)&&(acl==0))/////////////grabber arm arm 
{
ga0=0;
ga1=1;
ga2=0;
ga3=1;
}	

else if((ga==1)&&(cl==0)&&(acl==1))
{
ga0=1;
ga1=0;
ga2=1;
ga3=0;
}	

else if((ga==1)&&(cl==1)&&(acl==1))
{
ga0=1;
ga1=1;
ga2=1;
ga3=1;
}	

else if((ga==1)&&(cl==0)&&(acl==0))
{

ga0=0;
ga1=1;
ga2=1;
ga3=0;

}

else if(ga==0)
{

ga0=0;
ga1=0;
ga2=0;
ga3=0;

}								  ///grabber arm


if((gr==1)&&(cl==1)&&(acl==0))/////////////grabber 
{
gr0=0;
gr1=1;
gr2=0;
gr3=1;
}	

else if((gr==1)&&(cl==0)&&(acl==1))
{
gr0=1;
gr1=0;
gr2=1;
gr3=0;
}	

else if((gr==1)&&(cl==1)&&(acl==1))
{
gr0=1;
gr1=1;
gr2=1;
gr3=1;
}	

else if((gr==1)&&(cl==0)&&(acl==0))
{

gr0=0;
gr1=0;
gr2=0;
gr3=0;

}

else if(gr==0)
{

gr0=0;
gr1=0;
gr2=0;
gr3=0;

}								  ///grabber 


if((ab==1)&&(cl==1)&&(acl==0))/////////////arm base 
{
ab0=0;
ab1=1;
ab2=0;
ab3=1;
}	

else if((ab==1)&&(cl==0)&&(acl==1))
{
ab0=1;
ab1=0;
ab2=1;
ab3=0;
}	

else if((ab==1)&&(cl==1)&&(acl==1))
{
ab0=1;
ab1=1;
ab2=1;
ab3=1;
}	

else if((ab==1)&&(cl==0)&&(acl==0))
{

ab0=0;
ab1=0;
ab2=0;
ab3=0;

}

else if(ab==0)
{

ab0=0;
ab1=0;
ab2=0;
ab3=0;

}								  ///arm base 




}////end of while				  

		  
 
}
