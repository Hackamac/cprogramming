/*
Student name: Ragav Upreti
Subject:Programming Fundamental
Lab Sheet no:06
Program:WAP to calculate CI
Date: Nov 25,2016
*/
int main () {
float p,t,r,ci,E;
printf("Enter the principle amount: \n");
scanf("%f",&p);

printf("Enter time period: \n");
scanf("%f",&t);

printf("Enter the rate of interest: \n");
scanf("%f",&r);

E=1+r/100;

ci=(p*pow(E,t)-1);

printf("The value of CI is :%f",ci);



getch();
return 0;

}
