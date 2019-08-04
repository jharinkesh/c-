#include<iostream.h>
#include<stdio.h>
#include<conio.h>
#include<math.h>
//wap to solve roots of quadartic equation i.e., real and imaginary.
void main()
{
	clrscr();
       int a,b,c;
       float dis,deno,x1,x2;
       cout<<"ETV"<<endl;
       cin>>a>>b>>c;
       dis=(b*b)-(4*a*c);
       deno=2*a;
       if(dis>0)
       {
		cout<<"The roots are real roots";
		x1=(-b/deno)+(sqrt(dis)/deno);
		x2=(-b/deno)-(sqrt(dis)/deno);
		cout<<x1<<" and "<<" "<<x2;
	}
	else if(dis==0)
	{
		cout<<"The roots are repeated roots";
		x1=-b/deno;
		cout<<"the roots are"<<x1;
	}
	else
		cout<<"the roots are imaginary roots";
	getch();

}