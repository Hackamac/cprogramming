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
	int a;
	printf("Enter a number \n");
	scanf("%d",&a);
	
	if (a/10<1000000000 && a/10>100000000 )
	printf("You have entered 10 digit Number ");
	
	if (a/10<100000000 && a/10>10000000)
	printf("You have entered 9 digit Number ");
	
	if (a/10<10000000&&a/10>1000000)
	printf("You have entered 8 digit Number ");
	
	if (a/10<1000000&&a/10>100000)
	printf("You have entered 7 digit Number ");
	
	if (a/10<100000&&a/10>10000)
	printf("You have entered 6 digit Number ");
	
	if (a/10<10000&&a/10>1000)
	printf("You have entered 5 digit Number ");
	
	if (a/10<1000&&a/10>100)
	printf("You have entered 4 digit Number ");
	
	if (a/10<100 && a/10>10)
	printf("You have entered 3 digit Number ");
	
	if(a/10<10 && a/10>=1)
	printf("you have entered 2 digits number");
	
	
	if (a/10==0)
	printf("You have entered 1 digit Number ");
	
	
	
	
	
	
	
	return 0;
}

