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
	int a,count=1;
	printf("Enter a number \n");
	scanf("%d",&a);
	
	
	
	while(a>=10)
	{
		
	
	a=a/10;
	count++;
	
}
	
	printf("You have entered %d digit number \n",count);
	
 
 
	
	
	
	
	return 0;
}


