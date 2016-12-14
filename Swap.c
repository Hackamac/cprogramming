/*

StudentName: Ragav Upreti
Subject:Programming Fundamentals.
Rol No:25
Lab No:13
program:Write a program to swap two numbers using temporary variable
Date:Dec 14

*/

#include<stdio.h>


int main(){

		int a,b,temp;
		
		printf("Enter the first number: \n ");
		scanf("%d",&a);
		
		printf("Enter the second number: \n");
		scanf("%d",&b);
		
		printf("Numbers before Swap are: %d and %d \n",a,b);		
		
		temp=a;
		a=b;
		b=temp;
		
		printf("After swap the numbers are: %d and %d \n",a,b);
		
		return 0;
		
}
