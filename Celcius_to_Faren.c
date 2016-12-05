
/*
Student name: Ragav Upreti
Subject: Programming Fundamental
Roll:
Program: WAP to convert temperature from degree celcius to fahreinheit
Lab sheet no:
04
Date:  5 Dec
*/

#include<stdio.h>
#include<conio.h>

int main(){
    float c,fahren;

    printf("Enter the temperature in Celcius:\n");

    scanf("%f",&c);

    fahren=(c*1.8)+32;

    printf("The temperature in Fahrenheit is :%f",fahren);

    getch();
    return 0;
}
