/*
Student Name=Ragav Upreti
Subject=Programming Fundamentals 
Roll No.=29
Program=WAP to find first and last digit of Any 4 digit number
Lab No.=19
BCS Sem.=1st
Date=jan 18,2017
*/



#include<stdio.h>
void cube();
int main ()
{
	cube();
	printf("***Completed*** \n");
	
	return 0;
	
}
	void cube ()
	{
		int a,b;
	printf("Enter a number \n");
	scanf("%d",&a);
	b=a*a*a;
	printf("The cube of %d is :%d \n",a,b);
}
