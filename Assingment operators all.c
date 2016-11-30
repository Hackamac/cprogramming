/*
Student name : Ragav Upreti
Subject: Programming Fundamental
Roll NO:
Program : WAP to use assignment operators
Date: 30 Nov
*/

#include<stdio.h>
#include<conio.h>

int main ()
{
    int a,b;

printf("enter the first number: \n");
scanf("%d",&a);

printf("Enter the second number: \n");
scanf("%d",&b);

a+=b;
printf("the value of a+=b is : %d\n",a);

a-=b;
printf(" the value of a-=b is : %d\n",a);

a*=b;
printf(" the value of a*=b is : %d\n",a);

a/=b;
printf("the value of a/=b is : %d\n",a);

getch ();
return 0;

}
