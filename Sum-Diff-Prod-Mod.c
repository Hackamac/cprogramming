/*
Student Name:Ragav Upreti
Subject: Programming Fundamental
Lab Sheet No.: 06
Program: WAP to print arithmetic operation
Date: 25 Nov,2016
*/

#include<stdio.h>
#include<conio.h>

 void main() {
     int a,b,sum,dif,pro,div;

printf("Enter the first number:\n");
scanf("%d",&a);

printf("Enter the second number:\n");
scanf("%d",&b);

sum=a+b;
dif=a-b;
pro=a*b;
div=a/b;

printf("Sum is: %d\n",sum );
printf("difference is : %d\n",dif);
printf("product is:%d\n",pro);
printf("qoutient is: %d\n",div );

getch();

}
