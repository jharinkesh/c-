     #include<stdio.h>
     #include<conio.h>
     void main()
     {
     clrscr();
     float a[3][3],b[3];
     int i=1,j=1,k;
     float x[10],y[10],z[10];
     printf("\n enter the a[i][j]  ");
     for(i=0;i<3;i++)
     {
     for(j=0;j<3;j++)
     {
     printf("\n a[%d][%d]: ",i,j);
     scanf("%f",&a[i][j]);
     }
     }


     printf("\n enter b[i]  ");
     for(i=0;i<3;i++)
     {
     printf("\n b[%d]: ",i);
     scanf("%f",&b[i]);
     }

     float w=b[2]/a[2][2];
    x[1]=b[0]/a[0][0];
    y[1]=b[1]/a[1][1];
    z[1]=b[2]/a[2][2];

    printf("x[1]  %f ",x[1]);
     printf("y[1]  %f ",y[1]);
    printf("z[1]  %f ",z[1]);

    for(i=2;i<10;i++)
    {
     x[i]=(b[0]-(a[0][1]*y[i-1])-(a[0][2]*z[i-1]))/a[0][0];
     y[i]=(b[1]-(a[1][0]*x[i-1])-(a[1][2]*z[i-1]))/a[1][1];
     z[i]=(b[2]-(a[2][0]*x[i-1])-(a[2][1]*y[i-1]))/a[2][2];
     }

    printf("\n\n x[] is  %f ",x[9]);
    printf("\n\n y[] is  %f ",y[9]);
    printf("\n\n z[] is  %f ",z[9]);




    getch();
    }
