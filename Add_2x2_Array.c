#include<stdio.h>
#include<conio.h>
int main()
{
    int array[2][2],array1[2][2],sum[2][2],i,j;
    printf("Enter elements of 1st matrix\n");
for (i=0;i<2;i++)
{
    for(j=0;j<2;j++)
    {


    printf("Enter any number\n");
    scanf("%d",&array[i][j]);
    }
}
    printf("Enter elements of 2nd matrix\n");
    for (i=0;i<2;i++)
{
    for(j=0;j<2;j++)
    {

    printf("Enter any number\n");
    scanf("%d",&array1[i][j]);
    }
}
    printf("The sum of two matrix : \n");
    for (i=0;i<2;i++)
{

    for(j=0;j<2;j++)
    {
        sum[i][j]=array[i][j]+array1[i][j];
    }
}
    for (i=0;i<2;i++)
{
    for(j=0;j<2;j++)
    {
        printf("%d \t",sum[i][j]);
    }
    printf("\n");
}


return 0;
}





