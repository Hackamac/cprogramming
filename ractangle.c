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
void area();
int main ()
{
	area();
	printf("***Completed*** \n");
	
	return 0;
	
}
	void area ()
	{
		int a,b,c;
	printf("Enter Length of rectangle \n");
	scanf("%d",&a);
	printf("Enter breadth of rectangle \n");
	scanf("%d",&b);
	c=a*b;
	
	printf("The area of rectangle with length %d ,Breadth %d  is :%d units \n",a,b,c);
}
