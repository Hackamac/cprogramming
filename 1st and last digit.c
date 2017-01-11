/*
Student Name=Ragav Upreti
Subject=Programming Fundamentals 
Roll No.=29
Program=WAP to find first and last digit of Any 4 digit number
Lab No.=17
BCS Sem.=1st
Date=jan 11,2017
*/

#include<stdio.h>

int main()
{
	int a,f,l;
	printf("Enter any 4 digit number \n");
	scanf("%d",&a);
	
	f=a/1000;
	
	printf("First digit is %d\n",f);
	
	l=a%10;
	
	printf("The last digit is %d",l);
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}

