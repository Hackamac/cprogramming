/*
Student Name: Ragav Upreti
Subject: Programming Fundamental
Roll No: 25
Program: WAP to Find greatest Number among 3 using if,elseif,else
Date: 7 Dec
*/

#include<stdio.h>


int main ()
{
    int a,b,c;
    printf("Enter the first number: \n");
    scanf("%d",&a);

    printf("Enter the second number: \n");
    scanf("%d",&b);

    printf("Enter the third number:\n "d);
    scanf("%d",&c);


    if (a>=b&&a>=c)
    {
        printf("The greatest number is : %d",a);
    }

    else if (b>=a&&b>=c)
    {
        printf("The Greatest number is : %d",b);
    }
    else
    {
        printf("The greatest Number is : %d ",c);
    }

   
    return 0;
}
