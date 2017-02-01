/*
Student Name:Ragav Upreti
*/

#include<stdio.h>
#include<conio.h>

int main ()
{
    int sum=0,num[10],i;
    for(i=0;i<10;i++)
    {
        printf("Enter a number ");
        scanf("%d",&num[i]);
    }
    for (i=0;i<10;i++)
        {

       sum=sum+num[i];

    }
    printf("The sum is %d",sum);


    return 0;

}
