/*

StudentName: Ragav Upreti
Subject:Programming Fundamentals.
Rol No:25
Lab No:13
program:Write a make a simple calcultaor using switch operators 
Date:Dec 14

*/

#include<stdio.h>
#include<stdlib.h>


int main()
{
	
	int n,a,b,sum,diff,prod,div;
	
	
	printf("\t ***Simple Calculator*** \n");

	printf("*1 for addition \n");
	printf("*2 for subtraction \n");
	printf("*3 for Division \n");
	printf("*4 for multiplication \n"
	
	printf(">>>>>> Choose any number \n");
		
	scanf("%d",&n);
	switch(n)
	{
		case 1:
				printf("enter the first number \n");
				scanf("%d",&a);
				printf("enter the first number \n");
				scanf("%d",&b);
				sum=a+b;
				printf("The sum of the given number is: %d\n",sum);
				break;
		
		case 2:
				printf("enter the first number \n");
				scanf("%d",&a);
				printf("enter the first number \n");
				scanf("%d",&b);
				diff=a-b;
				printf("The difference of the given number is:%d\n",diff);
				break;
		
		case 3:
				printf("enter the first number \n");
				scanf("%d",&a);
				printf("enter the first number \n");
				scanf("%d",&b);
				prod=a*b;
				printf("The product of the given number is: %d\n",prod);
				break;

		case 4:
				printf("enter the first number \n");
				scanf("%d",&a);
				printf("enter the first number \n");
				scanf("%d",&b);
				div=a/b;
				printf("The remainder  of the given number is: %d\n",div);
				break;
		case 5:
				exit(0);
				break;
		default:
				printf("Thank you for visiting:");
		
	}
	
		
			
	
	
		
		
		
		return 0;
		}
		
		
		

