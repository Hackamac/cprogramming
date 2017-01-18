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
int area(int a);

int main ()
{
	int a,c;
	printf("Enter radius of circle \n");
	scanf("%d",&a);
	
	c=area(a);
	printf("area is :%d",c);
	
	
	return 0;
	
}
	int area (int a)
	{ int pie=22/7;
		
	
	a=pie*a*a;
	return a;
}


	
	
