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
void circle();
int main ()
{
	circle();
	printf("***Completed*** \n");
	
	return 0;
	
}
	void circle ()
	{
		float a,b,c,pie=22/7;
	printf("Enter the radius of a circle \n");
	scanf("%f",&a);
	b=2*pie*a;
	printf(" the perimeter of circle is %f \n",b);
	c=pie*a*a;
	printf(" the area of circle is %f \n",c);
	
}
