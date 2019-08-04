#include<iostream.h>
#include<stdio.h>
#include<time.h>
#include<conio.h>
void main()
{
 clrscr();
 time_t t;
 time(&t);
//printf("Today's date and time: %s\n", ctime(&t));
	cout<<(ctime(&t));



  //	 time_t timer;
//struct tm *tblock;

/* gets time of day */
//timer = time(NULL);

/* converts date/time to a structure */
//tblock = localtime(&timer);

//printf("Local time is: %s", asctime(tblock));

  // t = time(NULL);
 // printf("The number of seconds since January 1, 1970 is %ld",t);
//	cout<<t;
   getch();
}