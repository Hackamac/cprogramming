#include<stdio.h>
#include<conio.h>
int main()
{
    int x,array[2][2],i,j,array1[2][2],a,b;
for (i=0;i<2;i++)
{
    for(j=0;j<2;j++)
    {

    printf("Enter any number \n");
    scanf("%d ",&array[i][j]);
    }

    for (a=0;a<2;a++)
{
    for(b=0;b<2;b++)
    {

    printf("Enter any number \n");
    scanf("%d ",&array1[a][b]);
    }
    x=array[i][j]+array1[a][b];
printf("Sum is %d\n"),x;
}
return 0;



}
}
