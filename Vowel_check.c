/*
Student Name: Ragav Upreti
Roll No:25
Subject:Programming Fundamental
Program: WAP a program to check vowel from users alphabet
Lab Sheet:13
Date:Dec 21
*/

#include<stdio.h>


int main()
{
char c;
printf("Enter an alphabet: \n");
scanf("%c",&c);
if (c=='e'||c=='a'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U')
{
	printf(" %c is a vowel: \n",c);
}

else
 {
 printf("%c is not a  vowel \n",c);
 }



return 0;
}

