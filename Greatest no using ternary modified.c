/*
Student Name : Ragav Upreti
Subject: Programming Fundamental
Roll no: 25
Program: WAP to print largest no among three no using ternary operator.
Date: Nov 9
Lab Sheet No.: 12
*/

#include<stdio.h>
#include<conio.h>

int main ()
{
 int a,b,c;

 printf("Enter the first number: \n");
 scanf("%d",&a);

 printf("Enter the second number: \n");
 scanf("%d",&b);

 printf("Enter the third number:  \n");
 scanf("%d",&c);

 (a>=b&&a>=c)?("%d is the greatest number \n",a):(b>=a&&b>=c)?("%d is the greatest number \n",b):printf("%d is the greatest number \n",c);









 getch();
 return 0;
}

