    // program for extended memeory allocation //
    #include<malloc.h>
    #include<stdio.h>
    #include<conio.h>
    void main()
    {
    int *p,n,n1,i;
    clrscr();
    printf("\n enter the size of array ");
    scanf("%d",&n);
    p=(int *)realloc(NULL,n*sizeof(int));
    printf("\n enter the elements  ");

    for(i=0;i<n;i++)
    {
    scanf("%d",&p[i]);
    }


    printf("\n elements entered  \n");
    for(i=0;i<n;i++)
    {
    printf("%d ",*(p+i));
    }


    printf("\n enter the extended size  ");
    scanf("%d",&n1);


    p=(int *)realloc(p,sizeof(p)+n1*sizeof(int));  //extended allocation


    for(i=n;i<(n1+n);i++)
    {
    scanf("%d",&p[i]);
    }


    printf("\n  new elements entered  \n");       //new output//
    for(i=0;i<(n+n1);i++)
    {
    printf("%d ",*(p+i));
    }

    getch();
    }