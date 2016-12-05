/*
Student Name: Ragav Upreti
Subject: Programming Fundamental
Roll No. :
Lab Sheet No.:10
Program: WAP a program to use relational operators
Date: Nov
*/

#include<stdio.h>
#include<conio.h>

int main ()
{
    int a;
    printf("Enter your percentage: \n");
    scanf("%d",&a);
    if (a>100)




    {
        printf("??___Invalid Input____??");
    }
    if (a>=80 && a<100)
    {
        printf("Distinction \n");
    }
    if  (a>=60 && a<=79)
    {
        printf("First Division \n");
    }
    if (a>=40 && a<=59)
    {
        printf("Second Division \n");

    }
    if (a>=30 && a<=39)
    {
        printf("Third Division \n");

    }
    if (a<30 && a>=0)
    {
        printf(" :( :( Failed :( :( \n");
    }

    getch();
    return 0 ;
}
