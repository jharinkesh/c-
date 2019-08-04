#include<stdio.h>
#include<conio.h>

using namespace std;


int main(){
int **p,rows,cols;

printf("\n enter the row size ");
scanf("%d",&rows);
printf("\n enter the column size ");
scanf("%d",&cols);

p=new int*[rows];

for(int i=0;i<rows;i++)
{
    p[i]=new int[cols];
}


printf("\n enter the elements \n");

for(int i=0;i<rows;i++)
{
    for(int j=0;j<cols;j++)
        scanf("%d",&p[i][j]);

}

printf("\n\n elements are \n\n");
for(int i=0;i<rows;i++)
{
    for(int j=0;j<cols;j++)
        printf("%d ",p[i][j]);
    printf("\n");
}


return 0;
}
