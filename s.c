/*
Student Name: Ragav Upreti
Subject : Programming fundamental
Lab sheet No. : 7
Program: WAP to enter the marks of 7 subject and produce result
Date: Nov 28
*/

#include<stdio.h>
#include<conio.h>
int main()
{
float a,b,c,d,e,f,g,sum,avg,per;
printf("enter the marks of Computer architecture: \n");
scanf("%f",&a);
printf("Enter the marks of Interactive skills: \n");
scanf("%f",&b);
printf("Enter the marks of Algebra: \n");
scanf("%f",&c);
printf("Enter the marks of Discrete Mathematics: \n");
scanf("%f",&d);
printf("Enter the marks of Programming Fundamental: \n");
scanf("%f",&e);
printf("enter the marks of software Engineering: \n");
scanf("%f",&f);
printf("Enter the marks of organization management : \n");
scanf("%f",&g);

sum=a+b+c+d+e+f+g;
printf("Total marks is: %f\n",sum);

avg=sum/7;
printf("The average marks: %f\n",avg);

per=(sum/700)*100;
printf("The percentage is : %f\n",per);


getch();
return 0;
}
