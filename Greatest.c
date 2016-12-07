/*
Student Name: Ragav upreti
Subject: Programming Fundamental
Roll No : 25
Program: WAP to check greatest among 3 numbers
Date: 7 Dec
*/

#include<stdio.h>
#include<conio.h>

int main ()
{
int a,b,c;

printf("Enter first number \n");
scanf("%d",&a);

printf("Enter second number \n");
scanf("%d",&b);

printf("Enter third number \n");
scanf("%d",&c);

if (a>=b&&a>=c)
{
printf("The greatest number is %d \n",a);

}

if (b>=c&&b>=a)
{
    printf("The greatest number is %d \n",b);

}

if (c>=a&&c>=b)
{
    printf("The greatest number is %d \n",c);

}

getch();
return 0;
}
