/*
Student Name:Ragav Upreti
*/

#include<stdio.h>
#include<conio.h>

int main ()
{
    int num[10],i;
    for(i=0;i<10;i++)
    {
        printf("Enter a number ");
        scanf("%d",&num[i]);
    }
    for (i=0;i<10;i++)
        printf("num[%d] contains %d data \n",i,num[i]);

    return 0;

}
