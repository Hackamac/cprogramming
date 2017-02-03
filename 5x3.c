#include<stdio.h>
#include<conio.h>
int main()
{
    int array[5][2],i,j;
for (i=0;i<5;i++)
{
    for(j=0;j<2;j++)
    {


    printf("Enter any number\n");
    scanf("%d",&array[i][j]);
    }
}
    for (i=0;i<5;i++)
{
    for(j=0;j<2;j++)
    {


    printf("%d \t",array[i][j]);
    }

printf("\n");
}
return 0;

}




