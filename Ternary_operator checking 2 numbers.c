/*
Student Name: Ragav Upreti
Subject: Programming Fundamental
Roll No: 25
Program: WAP to Check greater number using ternary operator
Date: 7 Dec
*/

#include<stdio.h>


int main ()
{
	int a,b;
	printf("Enter a number \n");
	scanf("%d",&a);
	
	printf("Enter another number \n");
	scanf("%d",&b);
	
	(a-b>=0)? printf("%d is greater",a) :printf("%d is greater",b);
	
	
	
return 0;	
}
