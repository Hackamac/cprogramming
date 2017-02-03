#include<stdio.h>
#include<conio.h>
int main()
{
    int array[3][3],array1[3][3],sum[3][3],i,j;
    printf("Enter elements of 1st matrix\n");
for (i=0;i<3;i++)
{
    for(j=0;j<3;j++)
    {


    printf("Enter any number\n");
    scanf("%d",&array[i][j]);
    }
}
    printf("Enter elements of 2nd matrix\n");
    for (i=0;i<3;i++)
{
    for(j=0;j<3;j++)
    {

    printf("Enter any number\n");
    scanf("%d",&array1[i][j]);
    }
}
    printf("The sum of two matrix : \n");
    for (i=0;i<3;i++)
{

    for(j=0;j<3;j++)
    {
        sum[i][j]=array[i][j]+array1[i][j];
    }
}
    for (i=0;i<3;i++)
{
    for(j=0;j<3;j++)
    {
        printf("%d \t",sum[i][j]);
    }
    printf("\n");
}


return 0;
}






