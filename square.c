/*
student name: ragav upreti
subject: programming fundamental
lab sheet no: 7
program: wap to enter any number and find its square.
date:28th nov
*/

#include<stdio.h>
#include<conio.h>
#include<math.h>
int main ()
{
    float a,b;
    printf("enter a number: \n");
    scanf("%f",&a);
    b=sqrt(a);
    printf("the square of given no is: %f",b);

    getch();
    return 0;
}
