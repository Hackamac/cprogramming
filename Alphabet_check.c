/*
Student Name:Ragav Upreti
Subject:Programming Fundamental
Program:WAP to check alphabet from characters
Lab Sheet:13
Roll No.:25 
*/

#include<stdio.h>

int main()
{
	char c;
	int ASCII;
	
	printf("Enter any character: \n");
	scanf("%c",&c);
	ASCII=c;
if((ASCII>=65 && ASCII<=90)||(ASCII>=97 && ASCII<=122))
{
printf(" %c is alphabet \n",c);
}

else 
{
printf("%c is not alphabet \n",c);
}

return 0;




}
