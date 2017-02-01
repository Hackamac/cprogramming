/*
Student Name:Ragav Upreti
*/

#include<stdio.h>
#include<conio.h>

int main ()
{
    int a,num[10],i;
    for(i=0;i<10;i++)
    {
        printf("Enter a number ");
        scanf("%d",&num[i]);
    }
    for (i=0;i<10;i++)
        {
        //printf("num[%d] contains %d data \n",i,num[i]);
        a=num[0]+num[1]+num[2]+num[3]+num[4]+num[5]+num[6]+num[7]+num[8]+num[9];

    }
    printf("The sum is %d",a);


    return 0;

}
